#pragma once
//Gavin Kerr 2017 
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <thread> 
#include <chrono>
#include <ctime>
#include <fstream>
#include <mmsystem.h>
using namespace std;


/*
The different color codes are

0   BLACK
1   BLUE
2   GREEN
3   CYAN
4   RED
5   MAGENTA
6   BROWN
7   LIGHTGRAY
8   DARKGRAY
9   LIGHTBLUE
10  LIGHTGREEN
11  LIGHTCYAN
12  LIGHTRED
13  LIGHTMAGENTA
14  YELLOW
15  WHITE
*/

void F11() {

	SendMessage(GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);

}

void sleep(int time) {

	this_thread::sleep_for(chrono::milliseconds(time));

}

void color(int Color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}

void startScreen() {

	color(12);
	cout << "  _____      _     _______        _   " << endl;
	cout << " |  __ \\    | |   |__   __|      | |  " << endl;
	cout << " | |__) |__ | | _____| | _____  _| |_ " << endl;
	cout << " |  ___/ _ \\| |/ / _ \\ |/ _ \\ \\/ / __|" << endl;
	cout << " | |  | (_) |   <  __/ |  __/>  <| |_ " << endl;
	cout << " |_|   \\___/|_|\_\\___|_|\\___/_/\\_\\\\__|" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << endl;

	//sounds


}

//Sound Code that does not work... >:(
//void sound(int SoundChoice)
//{
//
//	switch (SoundChoice) {
//
//	case 1:
//		PlaySound(TEXT("bulb.wav"), NULL, SND_SYNC);
//		break;
//
//	case 2:
//		PlaySound(TEXT("squirt.wav"), NULL, SND_SYNC);
//		break;
//
//	case 3:
//		PlaySound(TEXT("char.wav"), NULL, SND_SYNC);
//		break;
//
//	case 4:
//		PlaySound(TEXT("pokecenter.wav"), NULL, SND_SYNC);
//		break;
//
//	}
//}

void Load(string PlayerName /*string &name, int &pokenum, int &xp, int &lvl*/) {

	string search;
	string dummy;

	string nameTemp;
	string pokenumTemp;
	string xpTemp; 
	string lvlTemp;

	ofstream SaveStateWrite;
	ifstream SaveStateRead;

	SaveStateWrite.open("SaveStates.txt", std::ios::app);
	SaveStateRead.open("SaveStates.txt");

	color(15);
	cout << "Searching SaveStates.txt for player data" << endl;

	while (!SaveStateRead.eof()) {
		getline(SaveStateRead, search);
		if (search == "=== PlayerName ===") {
			getline(SaveStateRead, nameTemp);
			if (nameTemp == PlayerName) {
				getline(SaveStateRead, search);
				//Finds Pokemon
				getline(SaveStateRead, pokenumTemp);
				getline(SaveStateRead, search);
				//Finds xp
				getline(SaveStateRead, xpTemp);
				getline(SaveStateRead, search);
				//Finds level
				getline(SaveStateRead, lvlTemp);
				getline(SaveStateRead, search);


				cout << nameTemp << endl;
				cout << pokenumTemp << endl;
				cout << xpTemp << endl;
				cout << lvlTemp << endl;


			}



		}
	}
}