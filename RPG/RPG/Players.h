#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <thread> 
#include <chrono>
#include <ctime>
#include <fstream>
#include <random>
#include "External.h"
#include <mmsystem.h>

using namespace std;

void player1setup() {

	string Player1Name;;
	int CharChoice;
	bool CharChosen = false;

	color(11);
	cout << "Please Enter Your Name Player 1 : ";
	color(14);
	cin >> Player1Name;
	cout << endl;

	sound();

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
				cout << "Option 1" << endl;
				CharChosen = true;
				break;

			case 2:

				color(5);
				cout << "Option 2" << endl;
				CharChosen = true;
				break;

			case 3:

				color(5);
				cout << "Option 3" << endl;
				CharChosen = true;
				break;

			}

		}
		else {

			color(5);
			cout << "Invalid Choice, Please type 1, 2 , or 3" << endl;
			color(14);

		}
	}
}