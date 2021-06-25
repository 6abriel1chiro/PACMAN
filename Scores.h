#pragma once
#pragma once
#include "Player.h"
#include "Lista.h"
#include <fstream>
class Scores
{
	Lista<Player> scores;
	Scores();


public:

	~Scores();

	static Scores& getInstancia();
	Lista<Player>& getScores();

	void registrar(Player* p);


	void toFile();
	void mostrar();

};

