#pragma once
#include "Personaje.h"
#include <random>
class Fantasma :
    public Personaje
{

protected:

   // string estado;


    //int estado; // 0 = agresivo, 1 = vulnerable  
    bool is_vulnerable;

public:
    Fantasma(int posx, int posy, int colour, char element);
    ~Fantasma();
    virtual bool getEstado();
    virtual void setEstado(bool newEstado);

    
     virtual void Jugar();



};

