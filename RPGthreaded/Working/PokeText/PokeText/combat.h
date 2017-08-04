#pragma once
//Windows Libs
#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <thread> 
#include <chrono>
#include <ctime>
#include <fstream>
#include <random>
#include <mmsystem.h>
#include "time.h"
#include <cwchar>

//Homemade Header Files
#include "External.h"
#include "Charmander.h"
#include "Squirtle.h"
#include "Bulbasur.h"
#include "POKEmon.h"

using namespace std;

string EnemyPokemon;
string EnemyName;

string RandomNameMaker() {

	srand(time(NULL));
	string Array[6] = { "Crabby", "Pidgey", "Butterfree", "Ratatta", "Exeggcute", "Zubat" };
	int Index = rand() % 6;
	return Array[Index];

}

void CombatStart() {

	ConsoleTextSize(19);

	system("CLS");

	sleep(100);

	color(14);

	Scroll("              __          _______ _      _____        _____   ____  _  ________ _______ ________   _________                _____  _____  ______          _____  ______ _____  ");
	Scroll("     /\\       \\ \\        / /_   _| |    |  __ \\      |  __ \\ / __ \\| |/ /  ____|__   __|  ____\\ \\ / /__   __|         /\\   |  __ \\|  __ \\|  ____|   /\\   |  __ \\|  ____|  __ \\ ");
	Scroll("    /  \\       \\ \\  /\\  / /  | | | |    | |  | |     | |__) | |  | | ' /| |__     | |  | |__   \\ V /   | |           /  \\  | |__) | |__) | |__     /  \\  | |__) | |__  | |  | |");
	Scroll("   / /\\ \\       \\ \\/  \\/ /   | | | |    | |  | |     |  ___/| |  | |  < |  __|    | |  |  __|   > <    | |          / /\\ \\ |  ___/|  ___/|  __|   / /\\ \\ |  _  /|  __| | |  | |");
	Scroll("  / ____ \\       \\  /\\  /   _| |_| |____| |__| |     | |    | |__| | . \\| |____   | |  | |____ / . \\   | |         / ____ \\| |    | |    | |____ / ____ \\| | \\ \\| |____| |__| |");
	Scroll(" /_/    \\_\\       \\/  \\/   |_____|______|_____/      |_|     |\____/|_|\\_\\______|  |_|  |______/_/ \\_\\  |_|        /_/    \\_\\_|    |_|    |______/_/    \\_\\_|  \\_\\______|_____/ ");

	sleep(100);

	system("CLS");

	color(12);

	cout << "              __          _______ _      _____        _____   ____  _  ________ _______ ________   _________                _____  _____  ______          _____  ______ _____  " << endl;
	cout << "     /\\       \\ \\        / /_   _| |    |  __ \\      |  __ \\ / __ \\| |/ /  ____|__   __|  ____\\ \\ / /__   __|         /\\   |  __ \\|  __ \\|  ____|   /\\   |  __ \\|  ____|  __ \\ " << endl;;
	cout << "    /  \\       \\ \\  /\\  / /  | | | |    | |  | |     | |__) | |  | | ' /| |__     | |  | |__   \\ V /   | |           /  \\  | |__) | |__) | |__     /  \\  | |__) | |__  | |  | |" << endl;
	cout << "   / /\\ \\       \\ \\/  \\/ /   | | | |    | |  | |     |  ___/| |  | |  < |  __|    | |  |  __|   > <    | |          / /\\ \\ |  ___/|  ___/|  __|   / /\\ \\ |  _  /|  __| | |  | |" << endl;
	cout << "  / ____ \\       \\  /\\  /   _| |_| |____| |__| |     | |    | |__| | . \\| |____   | |  | |____ / . \\   | |         / ____ \\| |    | |    | |____ / ____ \\| | \\ \\| |____| |__| |" << endl;
	cout << " /_/    \\_\\       \\/  \\/   |_____|______|_____/      |_|     |\____/|_|\\_\\______|  |_|  |______/_/ \\_\\  |_|        /_/    \\_\\_|    |_|    |______/_/    \\_\\_|  \\_\\______|_____/ " << endl;

	sleep(100);

	system("CLS");

	color(14);

	cout << "              __          _______ _      _____        _____   ____  _  ________ _______ ________   _________                _____  _____  ______          _____  ______ _____  " << endl;
	cout << "     /\\       \\ \\        / /_   _| |    |  __ \\      |  __ \\ / __ \\| |/ /  ____|__   __|  ____\\ \\ / /__   __|         /\\   |  __ \\|  __ \\|  ____|   /\\   |  __ \\|  ____|  __ \\ " << endl;;
	cout << "    /  \\       \\ \\  /\\  / /  | | | |    | |  | |     | |__) | |  | | ' /| |__     | |  | |__   \\ V /   | |           /  \\  | |__) | |__) | |__     /  \\  | |__) | |__  | |  | |" << endl;
	cout << "   / /\\ \\       \\ \\/  \\/ /   | | | |    | |  | |     |  ___/| |  | |  < |  __|    | |  |  __|   > <    | |          / /\\ \\ |  ___/|  ___/|  __|   / /\\ \\ |  _  /|  __| | |  | |" << endl;
	cout << "  / ____ \\       \\  /\\  /   _| |_| |____| |__| |     | |    | |__| | . \\| |____   | |  | |____ / . \\   | |         / ____ \\| |    | |    | |____ / ____ \\| | \\ \\| |____| |__| |" << endl;
	cout << " /_/    \\_\\       \\/  \\/   |_____|______|_____/      |_|     |\____/|_|\\_\\______|  |_|  |______/_/ \\_\\  |_|        /_/    \\_\\_|    |_|    |______/_/    \\_\\_|  \\_\\______|_____/ " << endl;

	sleep(100);

	system("CLS");

	color(12);

	cout << "              __          _______ _      _____        _____   ____  _  ________ _______ ________   _________                _____  _____  ______          _____  ______ _____  " << endl;
	cout << "     /\\       \\ \\        / /_   _| |    |  __ \\      |  __ \\ / __ \\| |/ /  ____|__   __|  ____\\ \\ / /__   __|         /\\   |  __ \\|  __ \\|  ____|   /\\   |  __ \\|  ____|  __ \\ " << endl;;
	cout << "    /  \\       \\ \\  /\\  / /  | | | |    | |  | |     | |__) | |  | | ' /| |__     | |  | |__   \\ V /   | |           /  \\  | |__) | |__) | |__     /  \\  | |__) | |__  | |  | |" << endl;
	cout << "   / /\\ \\       \\ \\/  \\/ /   | | | |    | |  | |     |  ___/| |  | |  < |  __|    | |  |  __|   > <    | |          / /\\ \\ |  ___/|  ___/|  __|   / /\\ \\ |  _  /|  __| | |  | |" << endl;
	cout << "  / ____ \\       \\  /\\  /   _| |_| |____| |__| |     | |    | |__| | . \\| |____   | |  | |____ / . \\   | |         / ____ \\| |    | |    | |____ / ____ \\| | \\ \\| |____| |__| |" << endl;
	cout << " /_/    \\_\\       \\/  \\/   |_____|______|_____/      |_|     |\____/|_|\\_\\______|  |_|  |______/_/ \\_\\  |_|        /_/    \\_\\_|    |_|    |______/_/    \\_\\_|  \\_\\______|_____/ " << endl;

	sleep(100);

	system("CLS");

	color(14);

	cout << "              __          _______ _      _____        _____   ____  _  ________ _______ ________   _________                _____  _____  ______          _____  ______ _____  " << endl;
	cout << "     /\\       \\ \\        / /_   _| |    |  __ \\      |  __ \\ / __ \\| |/ /  ____|__   __|  ____\\ \\ / /__   __|         /\\   |  __ \\|  __ \\|  ____|   /\\   |  __ \\|  ____|  __ \\ " << endl;;
	cout << "    /  \\       \\ \\  /\\  / /  | | | |    | |  | |     | |__) | |  | | ' /| |__     | |  | |__   \\ V /   | |           /  \\  | |__) | |__) | |__     /  \\  | |__) | |__  | |  | |" << endl;
	cout << "   / /\\ \\       \\ \\/  \\/ /   | | | |    | |  | |     |  ___/| |  | |  < |  __|    | |  |  __|   > <    | |          / /\\ \\ |  ___/|  ___/|  __|   / /\\ \\ |  _  /|  __| | |  | |" << endl;
	cout << "  / ____ \\       \\  /\\  /   _| |_| |____| |__| |     | |    | |__| | . \\| |____   | |  | |____ / . \\   | |         / ____ \\| |    | |    | |____ / ____ \\| | \\ \\| |____| |__| |" << endl;
	cout << " /_/    \\_\\       \\/  \\/   |_____|______|_____/      |_|     |\____/|_|\\_\\______|  |_|  |______/_/ \\_\\  |_|        /_/    \\_\\_|    |_|    |______/_/    \\_\\_|  \\_\\______|_____/ " << endl;

	sleep(100);

	system("CLS");

	color(12);

	cout << "              __          _______ _      _____        _____   ____  _  ________ _______ ________   _________                _____  _____  ______          _____  ______ _____  " << endl;
	cout << "     /\\       \\ \\        / /_   _| |    |  __ \\      |  __ \\ / __ \\| |/ /  ____|__   __|  ____\\ \\ / /__   __|         /\\   |  __ \\|  __ \\|  ____|   /\\   |  __ \\|  ____|  __ \\ " << endl;;
	cout << "    /  \\       \\ \\  /\\  / /  | | | |    | |  | |     | |__) | |  | | ' /| |__     | |  | |__   \\ V /   | |           /  \\  | |__) | |__) | |__     /  \\  | |__) | |__  | |  | |" << endl;
	cout << "   / /\\ \\       \\ \\/  \\/ /   | | | |    | |  | |     |  ___/| |  | |  < |  __|    | |  |  __|   > <    | |          / /\\ \\ |  ___/|  ___/|  __|   / /\\ \\ |  _  /|  __| | |  | |" << endl;
	cout << "  / ____ \\       \\  /\\  /   _| |_| |____| |__| |     | |    | |__| | . \\| |____   | |  | |____ / . \\   | |         / ____ \\| |    | |    | |____ / ____ \\| | \\ \\| |____| |__| |" << endl;
	cout << " /_/    \\_\\       \\/  \\/   |_____|______|_____/      |_|     |\____/|_|\\_\\______|  |_|  |______/_/ \\_\\  |_|        /_/    \\_\\_|    |_|    |______/_/    \\_\\_|  \\_\\______|_____/ " << endl;

	sleep(100);

	system("CLS");

	color(14);

	cout << "              __          _______ _      _____        _____   ____  _  ________ _______ ________   _________                _____  _____  ______          _____  ______ _____  " << endl;
	cout << "     /\\       \\ \\        / /_   _| |    |  __ \\      |  __ \\ / __ \\| |/ /  ____|__   __|  ____\\ \\ / /__   __|         /\\   |  __ \\|  __ \\|  ____|   /\\   |  __ \\|  ____|  __ \\ " << endl;;
	cout << "    /  \\       \\ \\  /\\  / /  | | | |    | |  | |     | |__) | |  | | ' /| |__     | |  | |__   \\ V /   | |           /  \\  | |__) | |__) | |__     /  \\  | |__) | |__  | |  | |" << endl;
	cout << "   / /\\ \\       \\ \\/  \\/ /   | | | |    | |  | |     |  ___/| |  | |  < |  __|    | |  |  __|   > <    | |          / /\\ \\ |  ___/|  ___/|  __|   / /\\ \\ |  _  /|  __| | |  | |" << endl;
	cout << "  / ____ \\       \\  /\\  /   _| |_| |____| |__| |     | |    | |__| | . \\| |____   | |  | |____ / . \\   | |         / ____ \\| |    | |    | |____ / ____ \\| | \\ \\| |____| |__| |" << endl;
	cout << " /_/    \\_\\       \\/  \\/   |_____|______|_____/      |_|     |\____/|_|\\_\\______|  |_|  |______/_/ \\_\\  |_|        /_/    \\_\\_|    |_|    |______/_/    \\_\\_|  \\_\\______|_____/ " << endl;

	sleep(100);

	system("CLS");

	color(12);

	cout << "              __          _______ _      _____        _____   ____  _  ________ _______ ________   _________                _____  _____  ______          _____  ______ _____  " << endl;
	cout << "     /\\       \\ \\        / /_   _| |    |  __ \\      |  __ \\ / __ \\| |/ /  ____|__   __|  ____\\ \\ / /__   __|         /\\   |  __ \\|  __ \\|  ____|   /\\   |  __ \\|  ____|  __ \\ " << endl;;
	cout << "    /  \\       \\ \\  /\\  / /  | | | |    | |  | |     | |__) | |  | | ' /| |__     | |  | |__   \\ V /   | |           /  \\  | |__) | |__) | |__     /  \\  | |__) | |__  | |  | |" << endl;
	cout << "   / /\\ \\       \\ \\/  \\/ /   | | | |    | |  | |     |  ___/| |  | |  < |  __|    | |  |  __|   > <    | |          / /\\ \\ |  ___/|  ___/|  __|   / /\\ \\ |  _  /|  __| | |  | |" << endl;
	cout << "  / ____ \\       \\  /\\  /   _| |_| |____| |__| |     | |    | |__| | . \\| |____   | |  | |____ / . \\   | |         / ____ \\| |    | |    | |____ / ____ \\| | \\ \\| |____| |__| |" << endl;
	cout << " /_/    \\_\\       \\/  \\/   |_____|______|_____/      |_|     |\____/|_|\\_\\______|  |_|  |______/_/ \\_\\  |_|        /_/    \\_\\_|    |_|    |______/_/    \\_\\_|  \\_\\______|_____/ " << endl;

	sleep(100);

	cout << endl;
	color(13);
	EnemyName = RandomNameMaker();
	cout << "A wild " << EnemyName << " Appeared" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	color(7);
	cout << "===  FIGHT  ===" << endl;
	cout << endl;


}



void combat(string &PlayerName, int &pokenum, int &xp, int &level)
{
	int rounds;
	cout << "How many rounds would you like to battle in : ";
	cin >> rounds;

	for (int i = 0; i <= rounds; i++) {

			CombatStart();
			bool IsDead = false;
			srand(time(NULL));
			int x = rand() % 5 + 1;
			Charmander CharmanderSprite; // 1
			Squirtle SquirtleSprite; // 2
			Bulbasur BulbasurSprite; // 3
			Pokemon GenericPokemon(EnemyName, 39, x);


			if (pokenum == 1)
			{
				while (IsDead == false)
				{
					int selection;


					color(11);
					cout << " Pick a move \n 1: Tackle \n 2: Flame" << endl;
					color(14);
					cin >> selection;

					switch (selection)
					{
					case 1:

						CharmanderSprite.Tackle(GenericPokemon.health);
						color(10);
						cout << "Charmander Used Tackle" << endl;
						color(15);
						cout << EnemyName << "'s Health : " << GenericPokemon.health << endl;
						break;
					case 2:
						CharmanderSprite.Flame(GenericPokemon.health);
						color(10);
						cout << "Charmander Used Flame" << endl;
						color(15);
						cout << EnemyName << "'s Health : " << GenericPokemon.health << endl;
						break;
					}

					srand(time(NULL));

					int Rando = rand() % 2;


					switch (Rando)
					{
					case 0:
						color(10);
						GenericPokemon.Tackle(CharmanderSprite.Health);
						color(15);
						cout << PlayerName << "'s Pokemon's Health : " << CharmanderSprite.Health << endl;
						break;
					case 1:
						color(10);
						GenericPokemon.Random(CharmanderSprite.Health);
						color(15);
						cout << PlayerName << "'s Pokemon's Health : " << CharmanderSprite.Health << endl;
						break;
					}

					if (CharmanderSprite.Health <= 0 || GenericPokemon.health <= 0)
					{
						IsDead = true;
						cout << "THE BATTLE IS OVER" << endl;
						cout << endl;
						cout << "Your Health : " << CharmanderSprite.Health << endl;
						cout << EnemyName << "'s Health : " << GenericPokemon.health << endl;
						PlaySound(TEXT("Victory.wav"), NULL, SND_SYNC);
						sleep(5000);
					}
				}
			}

			if (pokenum == 2)
			{

				bool IsDead = false;

				Charmander CharmanderSprite; // 1
				Squirtle SquirtleSprite; // 2
				Bulbasur BulbasurSprite; // 3
				Pokemon GenericPokemon(EnemyName, 39, 2);

				while (IsDead == false)
				{
					int selection;


					color(11);
					cout << " Pick a move \n 1: Tackle \n 2: Water Gun" << endl;
					color(14);
					cin >> selection;

					switch (selection)
					{
					case 1:

						SquirtleSprite.Tackle(GenericPokemon.health);
						color(10);
						cout << "Squirtle Used Tackle" << endl;
						color(15);
						cout << EnemyName << "'s Health : " << GenericPokemon.health << endl;
						break;
					case 2:
						SquirtleSprite.WaterGun(GenericPokemon.health);
						color(10);
						cout << "Squirtle Used Water Gun" << endl;
						color(15);
						cout << EnemyName << "'s Health : " << GenericPokemon.health << endl;
						break;
					}

					srand(time(NULL));

					int Rando = rand() % 2;


					switch (Rando)
					{
					case 0:
						color(10);
						GenericPokemon.Tackle(SquirtleSprite.Health);
						color(15);
						cout << PlayerName << "'s Pokemon's Health : " << SquirtleSprite.Health << endl;
						break;
					case 1:
						color(10);
						GenericPokemon.Random(SquirtleSprite.Health);
						color(15);
						cout << PlayerName << "'s Pokemon's Health : " << SquirtleSprite.Health << endl;
						break;
					}

					if (SquirtleSprite.Health <= 0 || GenericPokemon.health <= 0)
					{
						IsDead = true;
						cout << "THE BATTLE IS OVER" << endl;
						cout << endl;
						cout << "Your Health : " << SquirtleSprite.Health << endl;
						cout << EnemyName << "'s Health : " << GenericPokemon.health << endl;
						PlaySound(TEXT("Victory.wav"), NULL, SND_SYNC);
						sleep(5000);
					}
				}
			}

			if (pokenum == 3)
			{

				bool IsDead = false;

				Charmander CharmanderSprite; // 1
				Squirtle SquirtleSprite; // 2
				Bulbasur BulbasurSprite; // 3
				Pokemon GenericPokemon(EnemyName, 39, 2);

				while (IsDead == false)
				{
					int selection;


					color(11);
					cout << " Pick a move \n 1: Tackle \n 2: Vine Whip" << endl;
					color(14);
					cin >> selection;

					switch (selection)
					{
					case 1:

						BulbasurSprite.Tackle(GenericPokemon.health);
						color(10);
						cout << "Charmander Used Tackle" << endl;
						color(15);
						cout << EnemyName << "'s Health : " << GenericPokemon.health << endl;
						break;
					case 2:
						BulbasurSprite.VineWhip(GenericPokemon.health);
						color(10);
						cout << "Charmander Used Flame" << endl;
						color(15);
						cout << EnemyName << "'s Health : " << GenericPokemon.health << endl;
						break;
					}

					srand(time(NULL));

					int Rando = rand() % 2;


					switch (Rando)
					{
					case 0:
						color(10);
						GenericPokemon.Tackle(BulbasurSprite.Health);
						color(15);
						cout << PlayerName << "'s Pokemon's Health : " << BulbasurSprite.Health << endl;
						break;
					case 1:
						color(10);
						GenericPokemon.Random(BulbasurSprite.Health);
						color(15);
						cout << PlayerName << "'s Pokemon's Health : " << BulbasurSprite.Health << endl;
						break;
					}

					if (BulbasurSprite.Health <= 0 || GenericPokemon.health <= 0)
					{
						IsDead = true;
						cout << "THE BATTLE IS OVER" << endl;
						cout << endl;
						cout << "Your Health : " << BulbasurSprite.Health << endl;
						cout << EnemyName << "'s Health : " << GenericPokemon.health << endl;
						PlaySound(TEXT("Victory.wav"), NULL, SND_SYNC);
						sleep(5000);
					}
				}
			}
		}

	system("pause");
}

