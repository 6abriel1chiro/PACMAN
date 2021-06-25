#pragma once
#include "Thread.h"
class Entity
{

protected: 

    int posx, posy;
    char element;
public:
    Entity(int posx,int posy, char element);
    ~Entity();

    virtual string getTipo();
    virtual void print();

    virtual char getChar();


    static void printT(Entity* entity);

    virtual int getPosX();
    virtual int getPosY();









};

