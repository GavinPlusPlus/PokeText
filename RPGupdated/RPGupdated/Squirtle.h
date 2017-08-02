#pragma once
#include <string>
#include <random>
using namespace std;
class Squirtle
{
public:

	Squirtle();
	string name;
	int Xp;
	int Health;
	int MaxHealth;

	void Tackle(int &EnemyHealth);

	void WaterGun(int &EnemyHealth);



};