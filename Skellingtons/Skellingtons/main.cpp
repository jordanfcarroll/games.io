 // A SKELETON GAME
// by Jordan Carroll

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include "Playerclass.hpp"

using namespace std;

//Screen dimension constants
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;



// THE ENEMY CLASS
class Enemy
{
private:
    int xpos, ypos;
    
    
public:
    void spawn();
    void die();
    
    void setPosition(int, int);
    
    int getxpos()
    {return xpos;}
    int getypos()
    {return ypos;}
    // Constructor prototype
    Enemy(int, int);
    //	~Enemy();
};

//THE TILE CLASS

//CODE GOES HERE



//Global variables


SDL_Window* gWindow = NULL;
SDL_Surface* gScreenSurface = NULL;
//The window renderer
SDL_Renderer* gRenderer = NULL;
//Current displayed texture
SDL_Texture* gTexture = NULL;

//Key press surfaces constants
enum KeyPressSurfaces
{
    KEY_PRESS_SURFACE_DEFAULT,
    KEY_PRESS_SURFACE_UP,
    KEY_PRESS_SURFACE_DOWN,
    KEY_PRESS_SURFACE_LEFT,
    KEY_PRESS_SURFACE_RIGHT,
    KEY_PRESS_SURFACE_TOTAL
};


// Function Prototypes
void printboard(int px,int py);
//Starts up SDL and creates window
bool init();
//Loads media
bool loadMedia();
//Frees media and shuts down SDL
void close();
//Loads individual image as texture
SDL_Texture* loadTexture( std::string path );




// Main Function

int main( int argc, char* args[] )
{
    
    Player Player1(3,3,3);
    
    
    if( !init())
    {
        cout << "Failed to initialize!" << endl;
    }
    else
    {
        if(!loadMedia())
        {
            cout << "Failed to load media!" << endl;
        }
        else
        {
            SDL_Event e;
            // GAME LOOP
            // While application is running
            bool quit = false;
            while (!quit)
            {
                while (SDL_PollEvent( &e ) != 0)
                {
                    // user requests quit
                    if (e.type == SDL_QUIT)
                    {
                        quit = true;
                    }
                }
                //Clear screen
                SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
                SDL_RenderClear( gRenderer );
                
                //Render red filled quads
                SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );
                for(int j = SCREEN_HEIGHT/4; j < SCREEN_HEIGHT; j += SCREEN_HEIGHT/4)
                {
                    for(int i = SCREEN_WIDTH/5; i < SCREEN_WIDTH; i += SCREEN_WIDTH/5)
                    {
                        SDL_Rect fillRect = {i - SCREEN_WIDTH/14, j - SCREEN_HEIGHT/14, SCREEN_WIDTH/14, SCREEN_HEIGHT/14 };
                        SDL_RenderFillRect(gRenderer, &fillRect);
                        
                    }
                }

                //Update screen
                SDL_RenderPresent( gRenderer );
    
            }
        }
    }

    close();

    return 0;
}



// Functions


// Constructor Definition blocks
Player::Player(int xpos, int ypos, int health)
{
    this -> xpos = xpos;
    this -> ypos = ypos;
    this -> health = health;
}


Enemy::Enemy(int xpos, int ypos)
{
    this -> xpos = xpos;
    this -> ypos = ypos;
}





bool init()
{
    //Initialization flag
    bool success = true;
    
    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
        success = false;
    }
    else
    {
        //Set texture filtering to linear
        if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
        {
            printf( "Warning: Linear texture filtering not enabled!" );
        }
        
        //Create window
        gWindow = SDL_CreateWindow( "Skellingtons", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if( gWindow == NULL )
        {
            printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
            success = false;
        }
        else
        {
            //Create renderer for window
            gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
            if( gRenderer == NULL )
            {
                printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
                success = false;
            }
            else
            {
                //Initialize renderer color
                SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
                
                //Initialize PNG loading
                int imgFlags = IMG_INIT_PNG;
                if( !( IMG_Init( imgFlags ) & imgFlags ) )
                {
                    printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
                    success = false;
                }
            }
        }
    }
    
    return success;
}


SDL_Texture* loadTexture( std::string path )
{
    //The final texture
    SDL_Texture* newTexture = NULL;
    
    //Load image at specified path
    SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
    if( loadedSurface == NULL )
    {
        printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
    }
    else
    {
        //Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );
        if( newTexture == NULL )
        {
            printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
        }
        
        //Get rid of old loaded surface
        SDL_FreeSurface( loadedSurface );
    }
    
    return newTexture;
}



void close()
{
    //Destroy window
    SDL_DestroyRenderer( gRenderer );
    SDL_DestroyWindow( gWindow );
    gWindow = NULL;
    gRenderer = NULL;
    
    //Quit SDL subsystems
    IMG_Quit();
    SDL_Quit();
}

// SDL Media loading
bool loadMedia()
{
    //Loading success flag
    bool success = true;
    
    //Nothing to load
    return success;
}



