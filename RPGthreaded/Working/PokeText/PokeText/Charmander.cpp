#include "Charmander.h"



Charmander::Charmander(int &PokeHealth)
{
	PokemonName = "Charmander";
	Xp = 0;
	Health = PokeHealth;
	MaxHealth = Health;
}

void Charmander::Tackle(int & EnemyHealth)
{
	EnemyHealth -= 5;
}

void Charmander::StatUpdate(string name, int xp, int level, int PokeNum)
{
	PlayerName = name;
	PokemonName = "Charmander";
	PokeNumber = PokeNum;
	Xp = xp;
	Level = level;
}


void Charmander::Flame(int & EnemyHealth)
{
	int MinR = 5;
	int MaxR = 11;
	int Rando = rand() % MaxR + MinR;
	EnemyHealth -= Rando;
}
