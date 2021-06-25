#pragma once
#include "Fantasma.h"
class Miedoso :
    public Fantasma
{
private:

    mt19937 mt; // 1729 is the seed
    uniform_int_distribution<int> dist;
public:
    Miedoso(int posx, int posy, int colour, char element);
    ~Miedoso();
    void Jugar();
    void generateRandomPos(int& x, int& y);
    void siguienteCasilla();


};

