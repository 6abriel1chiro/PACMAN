#include "Player.h"



Player::Player(string useraName, int score)
{
	this->userName = useraName;
	this->score = score;
}

Player::~Player()
{
}

void Player::setName(string name)
{
	userName = name;

}

void Player::setScore(int points)
{
	score = score + points;
}

string Player::getName()
{
	return userName;
}

int Player::getScore()
{
	return score;
}

void Player::mostrarT(Player* p)
{
	p->mostrar();
}

bool Player::operator==(Player* p)
{
	return p->userName == userName;;
}

bool Player::cmpScore(Player* p1, Player* p2)
{
	return p1->score > p2->score;
}

void Player::mostrar()
{
	cout << "name: " << userName << endl;
	cout << "score: " << score << endl;
}

string Player::toString()
{
	stringstream ss;
	ss << userName << " : " << score;
	return ss.str();
} 
