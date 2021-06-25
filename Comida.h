#pragma once
#include "Entity.h"
class Comida:
	public Entity
{
protected:
	string tipo;

	
	//bolitas(Pac - Dots) 10; Bolas grandes(Power pellets) 50; Cereza 100

public:

	Comida(int posx, int  posy, char element);
	~Comida();
	 void print();
	  void printT(Entity* entity);

	  char getChar();



	


};

