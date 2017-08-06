
#pragma once

//Gavin Kerr 2017 

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
#include <cwchar>

//Homemade Header Files
#include "External.h"
#include "Charmander.h"
#include "Squirtle.h"
#include "Bulbasur.h"
#include "combat.h"
#include "External.h"
#include "KillSound.h"


/*
Example of Save State Format
### Game Save File Start ###
(PlayerName)
(CharChosen)
(xp)
(level)
### Game Save File End ###
*/

using namespace std;

void setup(string &PlayerName, int &CharChoice, int &xp, int &level, bool &SettingUp, bool &RunningGame, int &PokeHealth, int &NextLevel) {

	SettingUp = true;
	RunningGame = false;
	
	//Setup.join();
	
	color(25);

	ofstream SaveStateWrite;
	ifstream SaveStateRead;

	SaveStateWrite.open("SaveStates.txt", std::ios::app);
	SaveStateRead.open("SaveStates.txt");

	color(13);
	cout << "Loaded SaveStates.txt" << endl;

	string PokemonName = "MISSINGNAME";
	int PokeNumber;


	string search;



	bool CharChosen = false;
	bool NameEntered = false;
	bool NewUser = true;
	int StartFile;


	while (NameEntered == false) {
		bool searching = false;

		color(11);
		cout << "Please Enter Your Name : ";
		color(14);
		cin >> PlayerName;
		cout << endl;

		while (!SaveStateRead.eof() && searching == false) {

			getline(SaveStateRead, search);
			if (search == PlayerName) {

				color(12);
				cout << "Sorry, That Name Has Already Been Taken" << endl;
				cout << "Would you like to use that file?" << endl;
				color(15);
				cout << "Type 1 to Start that File, Type 2 if you would like to choose a new name" << endl;
				color(14);
				cin >> StartFile;
				color(14);

				if (StartFile == 1) {

					NewUser = false;
					NameEntered = true;

					PlaySound(TEXT("Blank.wav"), NULL, SND_LOOP);

					Load(PlayerName, CharChoice, xp, level, PokeHealth, NextLevel);

					RunningGame = true;
					SettingUp = false;

				}
				else {

						NameEntered = false;
						searching = true;
						break;

				}
			}
			else if (search != PlayerName) {

				NameEntered = true;

			}
		}
	}
	while (NewUser == true) {
		color(5);
		cout << "Please Choose Your Pokemon : ";
		cout << endl;

		color(12);
		cout << "1. Charmander" << endl;
		color(4);
		cout << "	Type: Fire" << endl;
		cout << "	Level: 1" << endl;
		cout << "	Moves: Tackle, Ember, EMPTY, EMPTY" << endl;
		cout << endl;

		color(11);
		cout << "2. Squirtle" << endl;
		color(1);
		cout << "	Type: Water" << endl;
		cout << "	Level: 1" << endl;
		cout << "	Moves: Tackle, Water Gun, EMPTY, EMPTY" << endl;
		cout << endl;

		color(10);
		cout << "3. Bulbasur" << endl;
		color(2);
		cout << "	Type: Grass" << endl;
		cout << "	Level: 1" << endl;
		cout << "	Moves: Tackle, Vine Whip, EMPTY, EMPTY" << endl;
		cout << endl;
		cout << endl;
		color(5);


		while (CharChosen == false) {
			cout << "Please Make a Selection : ";
			color(14);
			cin >> CharChoice;
			NewUser = false;
			if (CharChoice > 0 && CharChoice <= 3) {

				switch (CharChoice) {

				case 1:

					color(5);
					CharChosen = true;
					soundEffects(3);
					PokemonName = "Charmander";
					xp = 0;
					level = 1;
					PokeHealth = 39;

					break;

				case 2:

					color(5);
					CharChosen = true;
					soundEffects(1);
					PokemonName = "Squirtle";
					xp = 0;
					level = 1;
					PokeHealth = 39;

					break;

				case 3:

					color(5);
					CharChosen = true;
					soundEffects(2);
					PokemonName = "Bulbasur";
					xp = 0;
					level = 1;
					PokeHealth = 39;

					break;

				}

				system("CLS");

				color(13);
				cout << "Congratulations!!!" << endl;
				cout << "You have chosen " << PokemonName << endl;
				cout << endl;
				sleep(500);

				SaveStateWrite << "\n";
				SaveStateWrite << "### Game Save File Start ### \n";
				SaveStateWrite << "=== PlayerName ===" << endl;
				SaveStateWrite << PlayerName << "\n";
				SaveStateWrite << "=== Pokemon Number ===" << endl;
				SaveStateWrite << CharChoice << "\n";
				SaveStateWrite << "=== XP ===" << endl;
				SaveStateWrite << xp << "\n";
				SaveStateWrite << "=== Level ===" << endl;
				SaveStateWrite << level << "\n";
				SaveStateWrite << "=== PokeHealth ===" << endl;
				SaveStateWrite << PokeHealth << endl;
				SaveStateWrite << "=== NextLevelUp ===" << endl;
				SaveStateWrite << NextLevel << endl;
				SaveStateWrite << "### Gave Save File End ### \n";

				color(14);
				cout << "=-= YOUR GAME HAS BEEN SAVED =-=";

				sleep(500);
				
				PlaySound(TEXT("Blank.wav"), NULL, SND_LOOP);

				Load(PlayerName, CharChoice, xp, level, PokeHealth, NextLevel);

				RunningGame = true;
				SettingUp = false;

			}
			else {

				color(5);
				cout << "Invalid Choice, Please type 1, 2 , or 3" << endl;
				color(14);
			}
		}
	}
}
