#include "Charmander.h"



Charmander::Charmander()
{
	name = "Charmander";
	Xp = 0;
	Health = 39;
	MaxHealth = Health;
}

void Charmander::Tackle(int & EnemyHealth)
{
	EnemyHealth -= 5;
}

void Charmander::Flame(int & EnemyHealth) 
{
	int MinR = 7;
	int MaxR = 15;


	int Rando = rand() % MaxR + MinR;
	EnemyHealth -= Rando;
}
