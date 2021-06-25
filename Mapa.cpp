#include "Mapa.h"
mutex Mapa::global;
bool Mapa::continuar=true;

//Matrix<Entity*> Mapa::mapa(ALTO, ANCHO);

Mapa& Mapa::getInst()
{

	static Mapa inst;
	return inst;
}
Mapa::Mapa() :mapa(ALTO, ANCHO)
{
	//inicializar(ALTO, ANCHO);
	alto = 0;
	ancho = 0;

}

Mapa::~Mapa()
{
}

void Mapa::dibujar(int x, int y, int colour, char caracter)
{
	
	global.lock();
	color(colour);
	gotoxy(x, y);
	cout << caracter;
	global.unlock();
	color(COLORNORMAL);


}

void Mapa::borrar(int x, int y, char c)
{
	global.lock();
	gotoxy(x, y);
	cout << " ";
	global.unlock();



}

void Mapa::moverArriba(int& x, int& y, int colour, char c)
{

	Mapa::dibujar(x, y,colour,c);
	Mapa::borrar(x, y,c);
	y --;
	 Mapa::dibujar(x, y, colour, c);

	Sleep(400);

}

void Mapa::moverAbajo(int& x, int& y, int colour, char c)
{


	Mapa::dibujar(x, y, colour, c);
	Mapa::borrar(x, y, c);
	y++;
	Mapa::dibujar(x, y, colour, c);
	Sleep(400);
}

void Mapa::moverIzquierda(int& x, int& y, int colour, char c)
{
	Mapa::dibujar(x, y, colour, c);
	Mapa::borrar(x, y, c);

	x--;

	Mapa::dibujar(x, y, colour, c);
	Sleep(400);
}

void Mapa::moverDerecha(int& x, int& y, int colour, char c)
{
	Mapa::dibujar(x, y, colour, c);
	Mapa::borrar(x, y, c);
	x++;
	Mapa::dibujar(x, y, colour, c);
	Sleep(400);


}

bool Mapa::colision(int x, int y)
{
 	//cout << mapa[x][y]->getChar();
		//mapa[x][y]->print();
		return true;
	
	return false;
}

void Mapa::sumarPuntaje()
{
	Puntuacion::getInst().addScore(5);
}



void Mapa::inicializar(int F, int C)
{
	for (int i = 0; i < ALTO; i++)
	{
		for (int j = 0; j < ANCHO; j++)
		{
			//dibujoPantalla[i][j] = ' ';
			mapa[i][j] = NULL;
		}
	}


}



void Mapa::LoadMapFromFile(string MapName)
{

	try
	{
		file2matrix(MapName);
		loadObjects(MapName);
	}
	catch (exception e)
	{
		cout << "error" <<  endl;
	}
	
}

void Mapa::file2matrix(string filename)
{

		ifstream file;
		char x;
		string dir = "E:/clases +/SEM III/PROGRA II/PACMAN/PACMAN/Mapas/";
			file.open(dir + filename+ ".txt");

		if (!file.is_open() ) {
			cout << "No se pudo abrir el archivo...";
			return;
		}
		//cout << "EL CONTENIDO DEL ARCHIVO ES:" << endl;
		file >> alto >> ancho;
		for (int i = 0; i < alto; i++)
		{
			for (int j = 0; j < ancho; j++)
			{
				
				file >> x;
				if (x == '\r')
				{
					file >> x;

				}
				if (x == '\n')
				{
					file >> x;

				}
				//cout << i << " " << j << " " << x << endl;
				//dibujoPantalla[i][j] = x;
			}

		}
		file.close();
	

}
/*
void Mapa::print()
{
	for (int i = 0; i < alto; i++)
	{
		for (int j = 0; j < ancho; j++) {
			if (dibujoPantalla[i][j]=='0')
			{
				cout << ' ';
			}
			else { cout << dibujoPantalla[i][j]; }
			}
		cout << endl;

	}
}
*/



void Mapa::loadObjects(string filename)
{

	ifstream file;
	char x;
	string dir = "E:/clases +/SEM III/PROGRA II/PACMAN/PACMAN/Mapas/";
	file.open(dir + filename + ".txt");

	if (!file.is_open()) {
		cout << "No se pudo abrir el archivo...";
		return;
	}
	//cout << "EL CONTENIDO DEL ARCHIVO ES:" << endl;
	
	file >> alto >> ancho;
	mapa.setCols(ancho);
	mapa.setFilas(alto);



	for (int i = 0; i < alto; i++)
	{
		for (int j = 0; j < ancho; j++)
		{
		
			file >> x;
			if (x =='|' )
			{
				mapa[i][j] = new Obstaculo(j, i, x);

			}
			if (x == '-')
			{
				mapa[i][j] = new Obstaculo(j, i, x);

			}
			if (x == '.')
			{
				mapa[i][j] = new Comida(j, i, x);



			}
			if (x == '*')
			{
				mapa[i][j] = new Comida(j, i, x);




			}
			if (x == 'Q')
			{
				mapa[i][j] = new Comida(j, i,x);



			}		
			if ( x == '0')
			{
				mapa[i][j] = new Entity(j, i, x);

			}


			if (x == '\r')
			{
				file >> x;

			}
			if (x == '\n')
			{
				file >> x;

			}

			//cout << i << " " << j << " " << x << endl;
			//dibujoPantalla[i][j] = x;
		}

	}
	file.close();

}

void Mapa::printObjects()
{

	mapa.mostrar(Entity::printT);

}



Matrix<Entity*>&Mapa::getMapa()
{
	return mapa;
}




