#pragma once
#include <string>
#include <random>
using namespace std;
class Charmander
{
public:

	Charmander(int &PokeHealth);


	int Health;
	int MaxHealth;

	string PlayerName;
	string PokemonName = "MISSINGNAME";
	int PokeNumber;
	int Xp;
	int Level;


	void Tackle(int &EnemyHealth);
	void StatUpdate(string name, int xp, int level, int PokeNum);
	void Flame(int &EnemyHealth);



};