//
//  Tileclass.cpp
//  Skellingtons
//
//  Created by Jordan Carroll on 5/3/16.
//  Copyright © 2016 Jordan Carroll. All rights reserved.
//

#include "Tileclass.hpp"



void Tile::addPlayer()
{
    hasPlayer = 1;
}

void Tile::removePlayer()
{
    hasPlayer = 0;
}

void Tile::addEnemy()
{
    hasEnemy = 1;
}

void Tile::removeEnemy()
{
    hasEnemy = 0;
}


bool Tile::getHasPlayer()
{
    return hasPlayer;
}

bool Tile::getHasEnemy()
{
    return hasEnemy;
}


Tile::Tile()
{
    hasPlayer = 0;
    hasEnemy = 0;
    
    
}