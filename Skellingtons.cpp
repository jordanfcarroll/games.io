

// A SKELETON GAME
// by Jordan Carroll and Kevin Smith

#include <iostream>
using namespace std;


// The Player class
class Player
{
private:
	int health;
	int xpos, ypos;

public:
	void thwack();

	int getxpos()
		{return xpos};
	int getypos()
		{return ypos};
};

// The enemy class
class Enemy
{
private: 
	int xpos, ypos;


public:
	void spawn();
	void die();

	void setPosition(int, int);

	int getxpos()
		{return xpos};
	int getypos()
		{return ypos};
};







// Function Prototypes

	void startgame();
	void endgame();







// Main Function

int main() 
{
	

	return 0;
}