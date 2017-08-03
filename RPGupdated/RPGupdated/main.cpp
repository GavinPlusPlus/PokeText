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
#include "PlayerCreation.h"
#include "combat.h"

using namespace std;

string PlayerName;

void main() {

	F11();

	startScreen();

	setup(PlayerName);

	Load(PlayerName);

	system("pause");

	//setup();

	//combatStart();
	//combat(PokeSelect);
	//system("pause");

}


