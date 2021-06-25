#pragma once
#include "Fantasma.h"
class Bobo :
    public Fantasma
{
private:
    mt19937 mt; // 1729 is the seed
    uniform_int_distribution<int> dist;

public:
    Bobo(int posx, int posy, int colour, char element);
    ~Bobo();
    void Jugar();
    void generateRandomPos(int& x, int& y);
    void siguienteCasilla();

   // int getPosXPacman();
   // int getPosYPacman();



};

