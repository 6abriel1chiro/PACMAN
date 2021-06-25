#pragma once
#include "Entity.h"
class Obstaculo:
	public Entity
{

protected:

	string tipo;
public:
	Obstaculo(int posY, int posX,char element);
	~Obstaculo();
	 void print();
	  void printT(Entity* entity);
	  string getTipo();
	  char getChar();





};

