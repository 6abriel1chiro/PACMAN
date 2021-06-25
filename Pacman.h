#pragma once
#include "Personaje.h"
class Pacman :
    public Personaje
{

private:


public:

    Pacman(int posx, int posy, int colour, char element);

    ~Pacman();

    void Jugar();
    void pausa();
   // void siguienteCasilla(int posx, int posy, int colour);


    //bool colision(Entity* objeto);



};

