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
#include "combat.h"

using namespace std;

void PokeCenterStart(string &PlayerName, int &PokeSelect, int &xp, int &level, bool &RunningGame, bool &PokeCenter, int &NextLevel) {

	color(11);
	system("CLS");
	int exit = 0;
	bool exiting = true;

	cout << "  _____      _           _____           _            " << endl; 
	cout << " |  __ \\    | |         / ____|         | |           " << endl;
	cout << " | |__) |__ | | _____  | |     ___ _ __ | |_ ___ _ __ " << endl;
	cout << " | ___ / _ \\| |/ / _ \\ | |    / _ \\ '_ \\| __/ _ \\ '__| " << endl;
	cout << " | |  | (_) |   <  __/ | |___|  __/ | | | ||  __/ |   " << endl;
	cout << " |_|   \\___/|_|\\_\\___|  \\_____\\___|_| |_|\\__\\___|_|   " << endl;
	clear(3);
	cout << "Would you like to return to battle?" << endl;
	cout << "Type 1 for yes and type 2 for no" << endl;
	cin >> exit;
	
	while (exiting == true) {

		if (exit == 1) {
			RunningGame = true;
			PokeCenter = false;
			exiting = false;
		}
		else {
			RunningGame = false;
			PokeCenter = true;
			exiting = false;
		}
	}
}