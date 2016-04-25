//
//  SDLstuff.cpp
//  Skellingtons
//
//  Created by Jordan Carroll on 4/19/16.
//  Copyright © 2016 Jordan Carroll. All rights reserved.
//

#include "SDLstuff.hpp"


SDL_Window* gWindow = NULL;
SDL_Surface* gScreenSurface = NULL;
//The window renderer
SDL_Renderer* gRenderer = NULL;
//Current displayed texture
SDL_Texture* gTexture = NULL;