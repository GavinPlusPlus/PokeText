#include "Squirtle.h"



Squirtle::Squirtle()
{
	name = "Squirtle";
	Xp = 0;
	Health = 39;
	MaxHealth = Health;
}

void Squirtle::Tackle(int & EnemyHealth)
{
	EnemyHealth -= 5;
}

void Squirtle::WaterGun(int & EnemyHealth)
{
	int MinR = 8;
	int MaxR = 13;


	int Rando = rand() % MaxR + MinR;
	EnemyHealth -= Rando;
}
