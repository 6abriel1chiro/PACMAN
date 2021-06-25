#include "Pacman.h"

Pacman::Pacman(int posx, int posy, int colour,char element):Personaje(posx,posy,colour, element)
{

}

Pacman::~Pacman()
{
}



void Pacman::Jugar()
{
	char start;
	char key;
	hidecursor();
	start = _getch();


	Mapa::dibujar(posx, posy, colour, element);
	while (Mapa::continuar) {
		if (_kbhit())
		{
			key = _getch();
			switch (key)
			{//WASD
			case 'w':
				while (!_kbhit()) {
					//if (!Mapa::getInst().colision(posx, posy))
					Mapa::moverArriba(posx, posy, colour, element);
					Mapa::getInst().sumarPuntaje();
					//cout << "colsision" << endl;

				
								
				}
				break;
			case 's':
				while (!_kbhit()) {
					//if (!Mapa::getInst().colision(posx, posy))
					Mapa::moverAbajo(posx, posy, colour, element);
					Mapa::getInst().sumarPuntaje();

					//cout << "colsision" << endl;

					
				}

				break;
			case 'a':
				while (!_kbhit()) {
					//if (!Mapa::getInst().colision(posx, posy))
					Mapa::moverIzquierda(posx, posy, colour, element);
					Mapa::getInst().sumarPuntaje();

					//cout << "colsision" << endl;


				}
				break;
			case 'd':
				while (!_kbhit()) {
					//if (!Mapa::getInst().colision(posx, posy))
					Mapa::moverDerecha(posx, posy, colour, element);
					Mapa::getInst().sumarPuntaje();

				}
				break;
			case 'x':
				Mapa::continuar = false;
				
				Puntuacion::getInst().showScore();
				//pausa();

				break;
			}
		}


	}

}

void Pacman::pausa()
{
	/*
	int op;
	cout << "MENU DE PAUSA " << endl;
	cout << "1. continuar " << endl;
	cout << "2. reiniciar" << endl;
	cout << "3. salir" << endl;
	system("pause");
	cin >> op;
	switch (op)
	{
	case 1:
		break;
	case 2:
		//restart
		break;
	case 3:
		break;
	default:
		break;

	}
	*/
}








