
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
#include <cwchar>
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



void ConsoleTextSize(int size) {

	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = size;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

}

void Scroll(string Text) {

	for (int i = 0; i < Text.length(); i++) {

		cout << Text[i];
		this_thread::sleep_for(chrono::milliseconds(1));

	}
	cout << endl;
}

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
	cout << " |_|   \\___/|_|\_\\___||_|\\___/_/\\_\\\__|" << endl;
	cout << "" << endl;
	color(11);
	cout << "The Next Level Update || Gavin Kerr 2017" << endl;
	cout << endl;

	//sounds


}

void soundEffects(int choice)
{
	switch (choice) {

	case 1:
		PlaySound(TEXT("bulb.wav"), NULL, SND_SYNC);
		break;

	case 2:
		PlaySound(TEXT("squirt.wav"), NULL, SND_SYNC);
		break;

	case 3:
		PlaySound(TEXT("char.wav"), NULL, SND_SYNC);
		break;
	}
}

void Load(string &name, int &pokenum, int &xp, int &lvl, int &PokeHealth, int &NextLevel) {


	string dummy;
	bool NameFound = false;

	ofstream SaveStateWrite;
	ifstream SaveStateRead;

	string nameTemp;
	string pokenumTemp;
	string xpTemp;
	string levelTemp;
	string PokeHealthTemp;
	string NextLevelTemp;

	SaveStateWrite.open("SaveStates.txt", std::ios::app);
	SaveStateRead.open("SaveStates.txt");

	color(15);
	cout << endl;
	cout << "Searching SaveStates.txt for player data" << endl;

	while (NameFound == false) {
		getline(SaveStateRead, nameTemp);
		if (nameTemp == name) {
			getline(SaveStateRead, dummy);
			getline(SaveStateRead, pokenumTemp);
			getline(SaveStateRead, dummy);
			getline(SaveStateRead, xpTemp);
			getline(SaveStateRead, dummy);
			getline(SaveStateRead, levelTemp);
			getline(SaveStateRead, dummy);
			getline(SaveStateRead, PokeHealthTemp);
			getline(SaveStateRead, dummy);
			getline(SaveStateRead, NextLevelTemp);
			getline(SaveStateRead, dummy);
			
			NameFound = true;
		}

		if (nameTemp == name) {

			pokenum = atoi(pokenumTemp.c_str());
			xp = atoi(xpTemp.c_str());
			lvl = atoi(levelTemp.c_str());
			PokeHealth = atoi(PokeHealthTemp.c_str());
			NextLevel = atoi(NextLevelTemp.c_str());
		}
	}
	cout << "Closing SaveStates.txt" << endl;

	SaveStateWrite.close();
	SaveStateRead.close();
}

void SoundEngineStart() {
		PlaySound(TEXT("Opening.wav"), NULL, SND_LOOP|SND_ASYNC);
}

void SoundEngineCombat() {
	PlaySound(TEXT("Battle.wav"), NULL, SND_LOOP | SND_ASYNC);
}
 
void SoundEngineCenter() {
	PlaySound(TEXT("PokeCenter.wav"), NULL, SND_LOOP | SND_ASYNC);
}

void clear(int lines) {
	for (int i = 0; i <= lines; i++) {
		cout << endl;
	}
}

void Save(string &nameSave, int &pokenumSave, int &xpSave, int &lvlSave, int &PokeHealth, int &NextLevel) {

	string nameTemp;
	string dummy;
	bool NameFound = false;

	ofstream SaveStateWrite;
	ifstream SaveStateRead;

	SaveStateWrite.open("SaveStates.txt", std::ios::trunc);
	SaveStateRead.open("SaveStates.txt");

	SaveStateWrite << "\n";
	SaveStateWrite << "### Game Save File Start ### \n";
	SaveStateWrite << "=== PlayerName ===" << endl;
	SaveStateWrite << nameSave << "\n";
	SaveStateWrite << "=== Pokemon Number ===" << endl;
	SaveStateWrite << pokenumSave << "\n";
	SaveStateWrite << "=== XP ===" << endl;
	SaveStateWrite << xpSave << "\n";
	SaveStateWrite << "=== Level ===" << endl;
	SaveStateWrite << lvlSave << "\n";
	SaveStateWrite << "=== PokeHealth ===" << endl;
	SaveStateWrite << PokeHealth << endl;
	SaveStateWrite << "=== NextLevelUp ===" << endl;
	SaveStateWrite << NextLevel << endl;
	SaveStateWrite << "### Gave Save File End ### \n";


		cout << endl;
		sleep(1000);

		cout << "Closing SaveStates.txt" << endl;

		SaveStateWrite.close();
		SaveStateRead.close();
	
}


void LevelUp(string &nameLevel , int &pokenumLevel, int &xpLevel, int &lvlLevel, int &PokeHealth, int &NextLevel) {

	while (xpLevel >= NextLevel) {

		lvlLevel = lvlLevel + 1;
		xpLevel = xpLevel - NextLevel;
		cout << PokeHealth << endl;
		cout << xpLevel << endl;

		cout << endl;
		cout << "Whoa, your pokemon is now level : " << lvlLevel << endl;
		NextLevel = NextLevel + 25;
		PokeHealth = PokeHealth + 3;
		cout << endl; 
		cout << "XP needed for next level up : " << NextLevel << endl;
		cout << "Your current XP is : " << xpLevel << endl;
		cout << endl;
		cout << "Your Pokemon health is now : " << PokeHealth << endl;
		sleep(2000);
	}
}

