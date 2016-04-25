//Player class


#ifndef Playerclass_hpp
#define Playerclass_hpp

#include <stdio.h>


// THE PLAYER CLASS
class Player
{
private:
    int xpos, ypos, health;
    
public:
    void thwack();
    int getxpos();
    int getypos();
    void moveright();
    void moveup();
    void movedown();
    void moveleft();
    Player(int, int, int);
    //	~Player();
};

#endif /* Playerclass_hpp */
