#include "Comida.h"

Comida::Comida(int posx, int posy,char element):Entity(posx,posy, element)
{
	if (element=='.')	
	tipo = "comidaSimple";
	if (element=='*')	
	tipo = "comidaSimple";
	if (element=='Q')	
	tipo = "cherry";
}


void Comida::print()
{
	Entity::print();
}

void Comida::printT(Entity* entity)
{
	Entity::printT(entity);

}

char Comida::getChar()
{
	return element;
}





Comida::~Comida()
{
}
