#include "StartScreen.h"

StartScreen::StartScreen()
{
	player = new Player("",0);

}

StartScreen::~StartScreen()
{
}

void StartScreen::printMenu()
{
	cout << "--------------" << endl;
	cout << "1.elegir  mapa " << endl;
	cout << "2.Modificar nombre " << endl;
	cout << "3.Start" << endl;
	cout << "4.Highscores" << endl;
	cout << "5.Quit" << endl;
}

void StartScreen::loadMap()
{
	string MapName;
	cout << "Seleccionar Mapa(1: facil - 4: dificil)" << endl;
	cout << "ingrese nombre de mapa: ";
	cin >> MapName;
	Mapa::getInst().LoadMapFromFile(MapName);
}

void StartScreen::start()
{
	string name;
	int num;
	bool continuar = true;
	loadMap();
	cout << "ingrese su nombre: " << endl;
	cin >> name;
	player->setName(name);
	partida = new Match();

	system("cls");
	while (continuar) {
	printMenu();
	cout << name;
	cout << ", ingrese una opcion " << endl;
	cin >> num;
	switch (num)
	{

	case 1:
		loadMap();
		break;

		
	case 2:
		cout << "ingrese nuevo nombre: "; cin >> name;
		player->setName(name);
		break;

	case 3:
		cout << " use WASD PARA MOVERSE" << endl;

		
		system("cls");
		Mapa::getInst().printObjects();
		partida->start();
		player->setScore(Puntuacion::getInst().getScore());
		Scores::getInstancia().registrar(player);

		system("cls");


		break;

	case 4:
		Scores::getInstancia().mostrar();
		break;

	case 5:
		Scores::getInstancia().toFile();

		continuar = false;

		break;

	default:
		break;
	}
	}
	

}
