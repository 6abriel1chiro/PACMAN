#include "Match.h"



Match::Match():pac(5, 4, 3, char(2)),emboscador(1, 2, 9, char(2)), hunter(3, 2, 6, char(2)), scared(5, 2, 8, char(2)), bobo(8, 2, 4, char(2))
{
	
}

Match::~Match()
{
}

void Match::start()
{

	pac.start();
	hunter.start();

	emboscador.start();
	scared.start();
	bobo.start();

	pac.join();
	hunter.join();
	emboscador.join();
	scared.join();
	bobo.join();

}





