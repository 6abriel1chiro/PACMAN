#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Player
{

private:

	string userName;
	int score;

public:

	Player(string useraName, int score);
	~Player();

	void setName(string name);
	void setScore(int points);
	string getName();
	int getScore();
	static void mostrarT(Player* p);
	bool operator==(Player* p);
	static bool cmpScore(Player* p1, Player* p2);
	void mostrar();


	string toString();

};

