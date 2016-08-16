//
//  Enemy.hpp
//  Skellingtons
//
//  Created by Jordan Carroll on 5/3/16.
//  Copyright © 2016 Jordan Carroll. All rights reserved.
//

#ifndef Enemy_h
#define Enemy_h

#include <stdio.h>

// THE ENEMY CLASS
class Enemy
{
private:
    int xpos, ypos, health;
    
    
public:
    void spawn();
    void die();
    
    void setPosition(int, int);
    
    int getxpos();
    int getypos();
    // Constructor prototype
    Enemy(int, int, int);
    
    //	~Enemy();
};



#endif /* Enemy_h */
