#include "Squirtle.h"



Squirtle::Squirtle()
{
	PokemonName = "Squirtle";
	Xp = 0;
	Health = 39;
	MaxHealth = Health;
}

void Squirtle::Tackle(int & EnemyHealth)
{
	EnemyHealth -= 5;
}

void Squirtle::StatUpdate(string name, int xp, int level, int PokeNum)
{
	PlayerName = name;
	PokemonName = "Bulbasour";
	PokeNumber = PokeNum;
	Xp = xp;
	Level = level;
}


void Squirtle::WaterGun(int & EnemyHealth)
{
	int MinR = 5;
	int MaxR = 11;


	int Rando = rand() % MaxR + MinR;
	EnemyHealth -= Rando;
}
