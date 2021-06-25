#pragma once
#include "Fantasma.h"
class Emboscador :
    public Fantasma
{
private:
    mt19937 mt; // 1729 is the seed
    uniform_int_distribution<int> dist;
public:
    void Jugar();
    Emboscador(int posx, int posy, int colour, char element);
    ~Emboscador();
    void generateRandomPos(int& x, int& y);
    void siguienteCasilla();


};

