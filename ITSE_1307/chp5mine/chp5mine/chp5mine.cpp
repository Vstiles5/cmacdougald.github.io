// chp5mine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int intMaxGrid = 10;
	int intXLocation = 0;
	int intYLocation = 0;
	int intXGuess = 0;
	int intYGuess = 0;

	srand(time(0));
	intXLocation = (rand() % intMaxGrid) + 1;
	intYLocation = (rand() % intMaxGrid) + 1;
	cout << intXLocation << ',' << intYLocation << endl;
	do {
		do {
			cout << "Enter an x location guess: ";
			cin >> intXGuess;
		} while (intXGuess < 0 || intXGuess > intMaxGrid + 1);
		do {
			cout << "Enter an y location guess: ";
			cin >> intYGuess;
		} while (intYGuess < 0 || intYGuess > intMaxGrid + 1);


		for (int intYPrint = 1; intYPrint < intMaxGrid; intYPrint++) {
			for (int intXPrint = 1; intXPrint < intMaxGrid; intXPrint++) {

				if ((intXGuess == intXPrint) && (intYGuess == intYPrint) &&
					(intXLocation == intXGuess) && (intYLocation == intYGuess)) {
					cout << 'H';
				}
				else if ((intXGuess == intXPrint) && (intYGuess == intYPrint)) {
					cout << 'M';
				}
				else {
					cout << '.';
				}
			}
			cout << endl;
		}
	} while ((intXLocation != intXGuess) || (intYLocation != intYGuess));

	return 0;
}

