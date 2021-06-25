#pragma once
#include "Entity.h"
class Puntuacion
{
private:
	Puntuacion();

	int score;
public:

	static Puntuacion& getInst();
	int getScore();
	void addScore(int value);

	void showScore();
	~Puntuacion();

};

