#include "Entity.h"

Entity::Entity(int posx, int  posy,char element)
{
	this->posx = posx;
	this->posy = posy;
	this->element = element;
}



Entity::~Entity()
{
}




string Entity::getTipo()
{
	return string();
}

void Entity::print()
{
	gotoxy(posx, posy);
	cout << element;
}

char Entity::getChar()
{
	return element;
}

void Entity::printT(Entity* entity)
{
	if (entity != NULL)
		entity->print();
	else cout <<" ";
}

int Entity::getPosX()
{
	return posx;
}

int Entity::getPosY()
{
	return posy;
}





