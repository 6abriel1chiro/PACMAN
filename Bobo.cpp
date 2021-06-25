#include "Bobo.h"

Bobo::Bobo(int posx, int posy, int colour, char element):Fantasma(posx,posy,colour,element) ,mt(1729), dist(1, 3)
{
}

Bobo::~Bobo()
{
}


void Bobo::Jugar()
{
	Mapa::dibujar(posx, posy,colour, element);
	while (Mapa::continuar)
	{
		siguienteCasilla();

	}

}

void Bobo::generateRandomPos(int& x, int& y)
{

	int mX = dist(mt) - 1;
	int mY = dist(mt) - 1;
		if (x + mX && x + mX < 10)
		{
			x += mX;
		}
		if (y + mY && y + mY < 10)
		{
			y += mY;
		}

	
}

void Bobo::siguienteCasilla()
{
	int direccion = dist(mt);
	switch (direccion)
	{
	case 0:
		//if (!Mapa::getInst().colision(posx, posy))
	Mapa::moverArriba(posx, posy, colour, element);
		break;
	case 1:
		//if (!Mapa::getInst().colision(posx, posy))
		Mapa::moverAbajo(posx, posy, colour, element);
		break;
	case 2:
		if (!Mapa::getInst().colision(posx, posy))
		Mapa::moverIzquierda(posx, posy, colour, element);
		break;
	case 3:
		//if (!Mapa::getInst().colision(posx, posy))
		Mapa::moverDerecha(posx, posy, colour, element);
		break;
	default:
		break;
	}

}
