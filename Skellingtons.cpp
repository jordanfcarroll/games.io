

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

public:
	int position[1][1];
	void thwack();
};

// The enemy class
class Enemy
{

public:
	int position[1][1];
	void spawn();
	void die();
};



int main() 
{
	

	return 0;
}