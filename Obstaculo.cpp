#include "Obstaculo.h"

Obstaculo::Obstaculo(int posY, int posX, char element):Entity(posY,posX, element)
{


	if (element=='-' or element == '-')
	tipo = "muro";
	
}



Obstaculo::~Obstaculo()
{
}

void Obstaculo::print()
{

	Entity::print();
}

void Obstaculo::printT(Entity* entity)
{
	Entity::printT(entity);

}
string Obstaculo::getTipo()
{
	return tipo;
}
char Obstaculo::getChar()
{
	return element;
}

