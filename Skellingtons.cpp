

// A SKELETON GAME
// by Jordan Carroll and Kevin Smith

#include <iostream>

using namespace std;


// The Player class
class Player
{
private:
	int xpos, ypos, health;

public:
	void thwack();

	int getxpos()
		{return xpos;}
	int getypos()
		{return ypos;}

// Constructor prototype
	Player(int, int, int);
//	~Player();
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
		{return xpos;}
	int getypos()
		{return ypos;}
// Constructor prototype
	Enemy(int, int);
//	~Enemy();
};







// Function Prototypes

	void startgame();
	void endgame();
	
	void printboard(int px, int py);



// Main Function

int main() 
{
	Player Player1(3, 3, 3);
	printboard(Player1.getxpos(), Player1.getypos());
int a;
int b;


cout << "Move to which x?" ;
cin >> a;
cout << "Move to which y?";
cin >> b;

printboard(a, b);



	return 0;
}

// Functions


// Constructor Definition blocks
	Player::Player(int xpos, int ypos, int health)
	{	
		this -> xpos = xpos;
		this -> ypos = ypos;
		this -> health = health;
	}


	Enemy::Enemy(int xpos, int ypos) 
	{
		this -> xpos = xpos;
		this -> ypos = ypos;
	}



// Board printing function

void printboard(int px, int py)
{
	int i, j;
	int playerxpos = px;
	int playerypos = py;
	for ( i = 5; i > 0; i--) {
		cout << "XXXXXXXXXXX" << endl;
		for ( j = 1; j < 6; j ++) {
			cout << "X";
			if (playerxpos == i && playerypos == j) {
				cout << "P";
			}
			else
				{cout << " ";}
		}
		cout << "X" << endl;	
	}


	cout << "XXXXXXXXXXX" << endl;
}





















