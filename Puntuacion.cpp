#include "Puntuacion.h"

Puntuacion::Puntuacion()
{
}

Puntuacion& Puntuacion::getInst()
{
	// TODO: insert return statement here
	static Puntuacion instancia;
	return instancia;
}

int Puntuacion::getScore()
{
	return score;
}

void Puntuacion::addScore(int value)
{
	score = score + value;
}

void Puntuacion::showScore()
{
}

Puntuacion::~Puntuacion()
{
	gotoxy(113, 2);
	cout << "score: " << score << endl;
}
