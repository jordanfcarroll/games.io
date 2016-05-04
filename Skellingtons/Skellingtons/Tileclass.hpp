//
//  Tileclass.hpp
//  Skellingtons
//
//  Created by Jordan Carroll on 5/3/16.
//  Copyright © 2016 Jordan Carroll. All rights reserved.
//

#ifndef Tileclass_hpp
#define Tileclass_hpp

#include <stdio.h>


//THE TILE CLASS

class Tile
{
private:
    bool hasPlayer;
    bool hasEnemy;
    
public:
    
    // Constructor protoype
    void addPlayer();
    void removePlayer();
    void addEnemy();
    void removeEnemy();
    
    bool getHasPlayer();
    bool getHasEnemy();
    

    Tile();
    
};


#endif /* Tileclass_hpp */
