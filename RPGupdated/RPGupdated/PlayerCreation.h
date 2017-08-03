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

//Homemade Header Files
#include "External.h"
#include "Charmander.h"
#include "Squirtle.h"
#include "Bulbasur.h"
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

void setup(string PlayerName) {

	int CharChoice;

	color(25);

	
	ofstream SaveStateWrite;
	ifstream SaveStateRead;

	SaveStateWrite.open("SaveStates.txt", std::ios::app);
	SaveStateRead.open("SaveStates.txt");

	color(13);
	cout << "Loaded SaveStates.txt" << endl;

	string PokemonName = "MISSINGNAME";
	int PokeNumber;
	int xp;
	int level;

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

				switch (StartFile) {

				case 1:

					NewUser = false;
					NameEntered = true;

					break;

				case 2:

					NameEntered = false;
					searching = true;
					break;

				}
			} else if (search != PlayerName) {

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
		cout << "	Type: Water" << endl;
		cout << "	Level: 1" << endl;
		cout << "	Moves: Tackle, Razor Leaf, EMPTY, EMPTY" << endl;
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
					//sound(3);
					PokemonName = "Charmander";
					xp = 0;
					level = 1;

					break;

				case 2:

					color(5);
					CharChosen = true;
					//sound(1);
					PokemonName = "Squirtle";
					xp = 0;
					level = 1;
					break;

				case 3:

					color(5);
					CharChosen = true;
					//sound(2);
					PokemonName = "Bulbasur";
					xp = 0;
					level = 1;
					break;

				}

				system("CLS");

				color(13);
				cout << "Congratulations!!!" << endl;
				cout << "You have chosen " << PokemonName << endl;

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
				SaveStateWrite << "### Gave Save File End ### \n";

				color(14);
				cout << "=-= YOUR GAME HAS BEEN SAVED =-=";

			}
			else {

				color(5);
				cout << "Invalid Choice, Please type 1, 2 , or 3" << endl;
				color(14);
			}
			}
		}
	}
