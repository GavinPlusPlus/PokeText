#include "Bulbasur.h"



Bulbasur::Bulbasur()
{
	PokemonName = "Bulbasur";
	Xp = 0;
	Health = 39;
	MaxHealth = Health;
}

void Bulbasur::Tackle(int & EnemyHealth)
{
	EnemyHealth -= 5;
}

void Bulbasur::StatUpdate(string name, int xp, int level, int PokeNum)
{
	 PlayerName = name;
	 PokemonName = "MISSINGNAME";
	 PokeNumber = PokeNum;
	 Xp = xp;
	 Level = level;
}


void Bulbasur::VineWhip(int & EnemyHealth)
{
	int MinR = 5;
	int MaxR = 11;


	int Rando = rand() % MaxR + MinR;
	EnemyHealth -= Rando;
}
