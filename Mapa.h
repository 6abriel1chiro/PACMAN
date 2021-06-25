#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <mutex>
#include "Matrix.h"
#include "Lista.h"
#include "Obstaculo.h"
#include "Comida.h"
#include "formato.h"
#include "Puntuacion.h"


using namespace std;
#define ALTO 30
#define ANCHO 111
class Mapa
{
private:

	// R C

	 //char dibujoPantalla[ALTO][ANCHO];


	    Matrix<Entity*> mapa;

	 //Lista<Obstaculo> obstaculos;
	// Lista<Comida> comidas;



	//Matrix<char> dibujoPantalla;
	// OBJETO : CARACTER -- POS
	static mutex global;

	int alto;
	int ancho;


	Mapa();


public:

	static bool continuar;

	static Mapa& getInst();
	~Mapa();
	static void dibujar(int x,int y,int colour, char c);
	static void borrar(int x,int y, char c);
	
	static void moverArriba(int &x,int &y,int colour, char c);
	static void moverAbajo(int& x, int& y, int colour, char c);
	static void moverIzquierda(int& x, int& y,int colour, char c);
	static void moverDerecha(int& x, int& y,int colour, char c);

	bool colision(int x, int y);

	void sumarPuntaje();
	



	//static bool move(int x,int y, char c);

	void LoadMapFromFile(string mapName);

	void file2matrix(string filename);

	 //void print();
	 void inicializar(int F, int C);

	 void loadObjects(string filename);
	 void printObjects();
	   Matrix<Entity*>& getMapa();





};

