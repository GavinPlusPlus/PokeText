
#pragma once
#include <string>
using namespace std;
class Pokemon
{
public:

	Pokemon(string Name, int Health, int RandoMOVE);

	int health;
	string name;
	int RandoMove;

	void Tackle(int &EnemyHealth);

	void Random(int &EnemyHealth/*, string MoveName*/);



};