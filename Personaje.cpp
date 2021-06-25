#include "Personaje.h"

Personaje::Personaje(int posx, int posy, int colour, char element)
{

	this->colour = colour;
	this->posx = posx;
	this->posy = posy;
	this->element = element;
}

Personaje::~Personaje()
{
}



char Personaje::getChar()
{
	return element;
}

bool Personaje::canMove()
{
	return true;
}


void Personaje::process()
{
	Jugar();
}

