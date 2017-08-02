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
#include "time.h""

//Homemade Header Files
#include "External.h"
#include "Charmander.h"
#include "Squirtle.h"
#include "Bulbasur.h"

string EnemyPokemon;

void combatStart() {





	system("CLS");

	color(14);

	cout << "              __          _______ _      _____        _____   ____  _  ________ _______ ________   _________                _____  _____  ______          _____  ______ _____  " << endl;
	cout << "     /\\       \\ \\        / /_   _| |    |  __ \\      |  __ \\ / __ \\| |/ /  ____|__   __|  ____\\ \\ / /__   __|         /\\   |  __ \\|  __ \\|  ____|   /\\   |  __ \\|  ____|  __ \\ " << endl;
	cout << "    /  \\       \\ \\  /\\  / /  | | | |    | |  | |     | |__) | |  | | ' /| |__     | |  | |__   \\ V /   | |           /  \\  | |__) | |__) | |__     /  \\  | |__) | |__  | |  | |" << endl;
	cout << "   / /\\ \\       \\ \\/  \\/ /   | | | |    | |  | |     |  ___/| |  | |  < |  __|    | |  |  __|   > <    | |          / /\\ \\ |  ___/|  ___/|  __|   / /\\ \\ |  _  /|  __| | |  | |" << endl;
	cout << "  / ____ \\       \\  /\\  /   _| |_| |____| |__| |     | |    | |__| | . \\| |____   | |  | |____ / . \\   | |         / ____ \\| |    | |    | |____ / ____ \\| | \\ \\| |____| |__| |" << endl;
	cout << " /_/    \\_\\       \\/  \\/   |_____|______|_____/      |_|     |\____/|_|\\_\\______|  |_|  |______/_/ \\_\\  |_|        /_/    \\_\\_|    |_|    |______/_/    \\_\\_|  \\_\\______|_____/ " << endl;

	color(13);

	cout << endl;
	cout << "It is a " << EnemyPokemon << endl;
	cout << endl;


}

void combat(int SEL) 
{
	bool IsDead = false;


	Charmander CharmanderSprite;
	Squirtle SquirtleSprite;
	Bulbasur BulbasurSprite;

	if (SEL == 1)
	{
		while (IsDead == false)
		{
			int selection;
		cout << "FIGHT" << endl;

		cout << " Pick a move \n 1: Tacke \n 2: Flame" << endl;
		cin >> selection;

		switch (selection)
		{
		case 1:
			CharmanderSprite.Tackle(SquirtleSprite.Health);
			cout << "Tackle" << endl;
			break;
		case 2:
			CharmanderSprite.Flame(SquirtleSprite.Health);
			cout << "Flame" << endl;
			break;
		}

		srand(time(NULL));
		
		int Rando = rand() % 2;


		switch (Rando)
		{
		case 0 :
			SquirtleSprite.Tackle(CharmanderSprite.Health);
			cout << "Tackle" << endl;
			break;
		case 1:
			SquirtleSprite.WaterGun(CharmanderSprite.Health);
			cout << "Water Gun" << endl;
			break;
		}

		if (CharmanderSprite.Health <= 0 || SquirtleSprite.Health <= 0)
		{
			IsDead = true;
			cout << "Your Health" << CharmanderSprite.Health << endl;
			cout << "SquirtleSprite Health" << SquirtleSprite.Health << endl;
		}






		}
		

	}


	if (SEL == 2)
	{
		while (IsDead == false)
		{
			int selection;
			cout << "FIGHT" << endl;

			cout << " Pick a move \n 1: Tacke \n 2: Flame" << endl;
			cin >> selection;

			switch (selection)
			{
			case 1:
				CharmanderSprite.Tackle(SquirtleSprite.Health);
				cout << "Tackle" << endl;
				break;
			case 2:
				CharmanderSprite.Flame(SquirtleSprite.Health);
				cout << "Flame" << endl;
				break;
			}

			srand(time(NULL));

			int Rando = rand() % 2;


			switch (Rando)
			{
			case 0:
				SquirtleSprite.Tackle(CharmanderSprite.Health);
				cout << "Tackle" << endl;
				break;
			case 1:
				SquirtleSprite.WaterGun(CharmanderSprite.Health);
				cout << "Water Gun" << endl;
				break;
			}

			if (CharmanderSprite.Health <= 0 || SquirtleSprite.Health <= 0)
			{
				IsDead = true;
				cout << "Your Health" << CharmanderSprite.Health << endl;
				cout << "SquirtleSprite Health" << SquirtleSprite.Health << endl;
			}






		}


	}
}

void SoundEngine() {

	PlaySound(TEXT("Battle.wav"), NULL, SND_SYNC);

}