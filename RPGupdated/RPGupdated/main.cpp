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


void main() {

	int PokeSelect = 0;
	
	F11();

	startScreen();

	setup(PokeSelect);

	//combatStart();
	//combat(PokeSelect);
	//system("pause");

}


