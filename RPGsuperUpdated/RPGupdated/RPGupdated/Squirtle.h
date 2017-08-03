#pragma once
#include <string>
#include <random>
using namespace std;
class Squirtle
{
public:

	Squirtle();


	int Health;
	int MaxHealth;

	string PlayerName;
	string PokemonName = "MISSINGNAME";
	int PokeNumber;
	int Xp;
	int Level;


	void Tackle(int &EnemyHealth);
	void StatUpdate(string name, int xp, int level, int PokeNum);
	void WaterGun(int &EnemyHealth);



};