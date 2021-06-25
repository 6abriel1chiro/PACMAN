#include "Fantasma.h"

Fantasma::Fantasma(int posx, int posy, int colour, char element):Personaje(posx,posy,colour, element)
{
	//estado = 0;
	is_vulnerable = false;
}

Fantasma::~Fantasma()
{
}

bool Fantasma::getEstado()
{
	return is_vulnerable;
}

void Fantasma::setEstado(bool newEstado)
{
	is_vulnerable = newEstado;
}


void Fantasma::Jugar()
{

}
