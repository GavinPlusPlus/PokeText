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

	int PokeSelect = 0;
	string PlayerName;
	int xp;
	int level;

	F11();

	startScreen();

	setup(PlayerName, PokeSelect);

	Load(PlayerName, PokeSelect, xp, level);

	combat(PlayerName, PokeSelect, xp, level);


}


