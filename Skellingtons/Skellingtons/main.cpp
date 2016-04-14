 // A SKELETON GAME
// by Jordan Carroll and Kevin Smith

#include <iostream>
#include <SDL2/SDL.h>

using namespace std;


// THE PLAYER CLASS
class Player
{
private:
    int xpos, ypos, health;
    
public:
    void thwack();
    
    int getxpos()
    {return xpos;}
    int getypos()
    {return ypos;}
    
    // Constructor prototype
    Player(int, int, int);
    //	~Player();
};

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
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
SDL_Window* gWindow = NULL;
SDL_Surface* gScreenSurface = NULL;



// Function Prototypes
bool init();

void printboard(int px, int py);





// Main Function

int main( int argc, char* args[] )
{

    init();
    
    //Event handler
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
      
    }
    
    
    
   

    
    
    
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

// SDL INITIATION FUNCTION
bool init()
{
    bool success = true;
    if(SDL_Init(SDL_INIT_VIDEO)< 0)
    {
        printf("SDL failed to initialize.");
        success = false;
    }
    else
    {
        gWindow = SDL_CreateWindow("Skellingtons", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    }
    if (gWindow == NULL)
    {
        printf("gWindow error.");
        success = false;
    }
    else
    {
        gScreenSurface = SDL_GetWindowSurface(gWindow);
    }
    return success;
}




// Board printing function
/*
void printboard(int px, int py)
{
    int i, j;
    int playerxpos = px;
    int playerypos = py;
    for ( i = 5; i > 0; i--) {
        cout << "XXXXXXXXXXX" << endl;
        for ( j = 1; j < 6; j ++) {
            cout << "X";
            if (playerxpos == i && playerypos == j) {
                cout << "P";
            }
            else
            {cout << " ";}
        }
        cout << "X" << endl;	
    }
    
    
    cout << "XXXXXXXXXXX" << endl;
}

*/