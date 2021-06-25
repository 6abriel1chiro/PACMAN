#pragma once
#include "formato.h"
#include "Thread.h"
#include "Entity.h"
#include "Mapa.h"
#define COLORNORMAL 7

class Personaje :
    public Thread
{

protected:

	int colour;
	int posx,  posy;
	char element;



public:

	Personaje(int posx, int posy, int colour, char element);
	~Personaje();

	virtual char getChar();

	virtual bool canMove() ;











	void process();
	virtual void Jugar() = 0;

};

