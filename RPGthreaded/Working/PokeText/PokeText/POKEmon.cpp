#include "POKEmon.h"
#include <iostream>
#include <time.h>
using namespace std;
void Pokemon::Tackle(int & EnemyHealth)
{
	EnemyHealth -= 5;
	cout << name << " used " << "Tackle" << endl;
}

void Pokemon::Random(int & EnemyHealth/*, string MoveName*/)
{
	string MoveNAME;
	int random = 0;
	int MIN = 0;
	int MAX = 0;
	switch (RandoMove)
	{
	case 1:
		// Move 1
		MoveNAME = "Headbutt";
		MIN = 3;
		MAX = 10;
		srand(time(NULL));
		random = rand() % MIN + MAX;
		cout << name << " used " << MoveNAME << endl;
		break;
	case 2:
		// Move 2
		MoveNAME = "Light Beam";
		MIN = 5;
		MAX = 6;
		srand(time(NULL));
		random = rand() % MIN + MAX;
		cout << name << " used " << MoveNAME << endl;
		EnemyHealth -= random;
		break;
	case 3:
		// Move 3
		MoveNAME = "Splash";
		MIN = 4;
		MAX = 7;
		srand(time(NULL));
		random = rand() % MIN + MAX;
		cout << name << " used " << MoveNAME << endl;
		EnemyHealth -= random;
		break;
	case 4:
		// Move 4
		MoveNAME = "Flash";
		MIN = 1;
		MAX = 4;
		srand(time(NULL));
		random = rand() % MIN + MAX;
		cout << name << " used " << MoveNAME << endl;
		EnemyHealth -= random;
		break;
	case 5:
		// Move 5
		MoveNAME = "Surf";
		MIN = 1;
		MAX = 6;
		srand(time(NULL));
		random = rand() % MIN + MAX;
		cout << name << " used " << MoveNAME << endl;
		EnemyHealth -= random;
		break;
	}
}

Pokemon::Pokemon(string Name, int Health, int randoMOVE)
{
	name = Name;
	health = Health;
	RandoMove = randoMOVE;
}