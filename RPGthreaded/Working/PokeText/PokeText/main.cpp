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
#include <cwchar>
#include "External.h"
#include "PlayerCreation.h"
#include "combat.h"

using namespace std;

void main() {
	// Player Info
	string PlayerName;
	int PokeSelect;
	int xp;
	int level;
	int PokeHealth;
	int NextLevel = 100;

	//Selectors
	bool SettingUp = true;
	bool RunningGame = false;
	bool PokeCenter = false;

	// RickRoll Crap
	int tabs = 12;
	bool RickRollMode = false;

	// Start of Game
	F11();

	startScreen();

	if (RickRollMode == true) {

		cout << endl;
		cout << "The Game is now loading... Please Enjoy" << endl;
		cout << endl;

		for (int i = 0; tabs >= i; i++) {

			sleep(1000);
			ShellExecute(NULL, "open", "https://www.youtube.com/watch?v=dQw4w9WgXcQ", NULL, NULL, SW_SHOWNORMAL);

		}

	}

	while (true) {

		// Setup
		if (SettingUp == true) {
			// Create Threads
			thread sound(SoundEngineStart);
			thread game(setup, ref(PlayerName), ref(PokeSelect), ref(xp), ref(level), ref(SettingUp), ref(RunningGame), ref(PokeHealth), ref(NextLevel));
			// Join Threads
			sound.join();
			game.join();
		}

		// Combat
		if (RunningGame == true) {
			// Create Threads
			thread combat(combat, ref(PlayerName), ref(PokeSelect), ref(xp), ref(level), ref(RunningGame), ref(PokeCenter), ref(PokeHealth), ref(NextLevel));
			thread sound2(SoundEngineCombat);
			// Join Threads
			combat.join();
			sound2.join();
		}

		// Poke Center
		if (PokeCenter == true) {
			// Create Threads
			thread PokeCenter(PokeCenterStart, ref(PlayerName), ref(PokeSelect), ref(xp), ref(level), ref(RunningGame), ref(PokeCenter), ref(NextLevel));
			thread sound3(SoundEngineCenter);
			// Join Threads
			PokeCenter.join();
			sound3.join();
		}
	}
}





