#include "Squirtle.h"



Squirtle::Squirtle(int &PokeHealth)
{
	PokemonName = "Squirtle";
	Xp = 0;
	Health = PokeHealth;
	MaxHealth = Health;
}

void Squirtle::Tackle(int & EnemyHealth)
{
	EnemyHealth -= 5;
}

void Squirtle::StatUpdate(string name, int xp, int level, int PokeNum)
{
	PlayerName = name;
	PokemonName = "Squirtle";
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
