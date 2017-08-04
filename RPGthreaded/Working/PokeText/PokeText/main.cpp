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

	int PokeSelect;
	string PlayerName;
	int xp;
	int level;
	
	
	F11();

	startScreen();

	thread sound(SoundEngineStart);
	
	thread game(setup, ref(PlayerName), ref(PokeSelect), ref(xp), ref(level));
	


	sound.join();
	game.join();
	
}





