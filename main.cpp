#include "Match.h"
#include "StartScreen.h"
void test() {

	
	Mapa::getInst().LoadMapFromFile("2");
	Mapa::getInst().printObjects();
	//mapa.print();
	
	Pacman p(25, 25, 3, char(2));
	//Bobo b(6, 5, 4, char(2));

	p.start();
	//b.start();
	p.join();
	///b.join();
	
	
	
	
}


void testGame(){
	StartScreen game;
	game.start();
}



int  main() {
	
	//test();



	testGame();


	
	


	return 0;
}