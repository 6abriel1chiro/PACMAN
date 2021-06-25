#pragma once
#include "Fantasma.h"
class Cazador :
    public Fantasma
{

private:
    mt19937 mt; // 1729 is the seed
    uniform_int_distribution<int> dist;


public:
    Cazador(int posx, int posy, int colour, char element);
    ~Cazador();
    void Jugar();
    void generateRandomPos(int& x, int& y);
    void siguienteCasilla();





};

