#pragma once
#include "Mapa.h"
#include "Pacman.h"
#include "Bobo.h"
#include "Cazador.h"
#include "Emboscador.h"
#include "Miedoso.h"


class Match
{
private:
	mutex m;
	Pacman pac;
	Cazador hunter;
	Emboscador emboscador;
	Miedoso scared;
	Bobo bobo;
	

public:
	Match( );
	~Match();
	void start();

	//void init();







};

