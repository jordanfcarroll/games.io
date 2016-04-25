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
    if(xpos < 4)
    {
        xpos++;
    }
}
void Player::moveleft()
{
    if(xpos > 1)
    {
        xpos--;
    }
}
void Player::moveup()
{
    if(ypos < 4)
    {
        ypos++;
    }
}
void Player::movedown()
{
    if(ypos > 1)
    {
        ypos--;
    }
}
