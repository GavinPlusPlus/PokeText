#pragma once
#include <string>
#include <random>
using namespace std;
class Charmander
{
public:

	Charmander();
	string name;
	int Xp;
	int Health;
	int MaxHealth;

	void Tackle(int &EnemyHealth);

	void Flame(int &EnemyHealth);



};