#pragma once
//Windows Libs
#include <iostream>
//Gavin Kerr 2017 

#include <string>
#include <time.h>
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

/*
Example of Save State Format
### Game Save File Start ###
(PlayerName)
(CharChosen)
### Game Save File End ###
*/

using namespace std;

void setup() {

	ofstream SaveStateWrite;
	ifstream SaveStateRead;

	SaveStateWrite.open("SaveStates.txt", std::ios::app);
	SaveStateRead.open("SaveStates.txt");

	color(13);
	cout << "Loaded SaveStates.txt" << endl;


	string PlayerName;
	string PokemonName = "MISSINGNAME";
	string search;
	int CharChoice;
	bool CharChosen = false;
	bool NameEntered = false;
	bool CreatingPlayer = false;


	while (NameEntered == false) {
		color(11);
		cout << "Please Enter Your Name : ";
		color(14);
		cin >> PlayerName;
		cout << endl;

		while (!SaveStateRead.eof()) {
			getline(SaveStateRead, search);
			if (search == PlayerName) {

				color(12);
				cout << "Sorry, That Name Has Already Been Taken" << endl;
				cout << "Please Try Again \n" << endl;
				color(14);
				cin >> PlayerName;
				NameEntered = false;

			} else if(search != PlayerName) {

				NameEntered = true;
				CreatingPlayer = true;

			}
		}


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
			if (CharChoice > 0 && CharChoice <= 3) {

				switch (CharChoice) {

				case 1:

					color(5);

					CharChosen = true;
					sound(3);
					PokemonName = "Charmander";
					break;

				case 2:

					color(5);

					CharChosen = true;
					sound(1);
					PokemonName = "Squirtle";
					break;

				case 3:

					color(5);

					CharChosen = true;
					sound(2);
					PokemonName = "Bulbasur";
					break;

				}

				system("CLS");

				color(13);
				cout << "Congratulations!!!" << endl;
				cout << "You have chosen " << PokemonName << endl;

				SaveStateWrite << "\n";
				SaveStateWrite << "### Game Save File Start ### \n";
				SaveStateWrite << PlayerName << "\n";
				SaveStateWrite << CharChoice << "\n";
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