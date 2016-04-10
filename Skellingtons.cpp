

// A SKELETON GAME
// by Jordan Carroll and Kevin Smith

using namespace std;

// Functions

	void startgame();
	void endgame();


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



int main() 
{
	

	return 0;
}