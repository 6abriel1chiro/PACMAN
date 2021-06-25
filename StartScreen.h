#pragma once
#include <stdlib.h>
#include "Player.h"
#include "Match.h"
#include "Scores.h"
class StartScreen
{

private:
	Player* player;
	Match* partida;
	int startPosX ;
	int startPosY ;
public:
	StartScreen();
	~StartScreen();

	void printMenu();
	void loadMap();
	void start();


};

