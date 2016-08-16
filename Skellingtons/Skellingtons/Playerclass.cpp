//
//  Playerclass.cpp
//  Skellingtons
//
//  Created by Jordan Carroll on 4/19/16.
//  Copyright © 2016 Jordan Carroll. All rights reserved.
//

#include "Playerclass.hpp"


int Player::getxpos()
{return xpos;}
int Player::getypos()
{return ypos;}

void Player::moveright()
{
    if(xpos < 3)
    {
        xpos++;
    }
}
void Player::moveleft()
{
    if(xpos > 0)
    {
        xpos--;
    }
}
void Player::moveup()
{
    if(ypos < 3)
    {
        ypos++;
    }
}
void Player::movedown()
{
    if(ypos > 0)
    {
        ypos--;
    }
}

void Player::setxpos(int a)
{
    xpos = a;
}

void Player::setypos(int a)
{
    ypos = a;
}

