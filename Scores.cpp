#include "Scores.h"

Scores::Scores()
{
}

Scores::~Scores()
{
}

Scores& Scores::getInstancia()
{
	// TODO: insert return statement here
	static Scores inst;
	return inst;
}

Lista<Player>& Scores::getScores()
{
	// TODO: insert return statement here
	return scores;
}

void Scores::registrar(Player* p)
{
	scores.registrar(p);

}

void Scores::toFile()
{
	//scores.sort2(Player::cmpScore);
	ofstream file;
	file.open("E:/clases + /SEM III/PROGRA II/PACMAN/PACMAN/Scores/playerScores.txt",ios::app);
	
	for (int i = 0; i < scores.getLen(); i++)
	{
		//cout << scores[i]->getName() << " : " << scores[i]->getScore();
		file<<scores[i]->toString();
	}
	file.close();
}



void Scores::mostrar()
{
	scores.mostrar(Player::mostrarT);
}
