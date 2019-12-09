// Lottery machine

#include <iostream>
#include <algorithm>
#include <time.h>
#include "Header.h"
using namespace std; 

int main() {
	int const MAX = 39; // maximum value of lottery number
	int const MIN = 1; // minimum value of lottery number
	int const LOTTERY_SIZE = 7; // # of lottery numbers
	int const BONUS_SIZE = 3; // # of bonus numbers

	DisplayWelcome();
	DisplayMenu();

	srand(time(0)); // refreshing seeds for random generation
	Start(MAX, MIN, LOTTERY_SIZE, BONUS_SIZE);
	
	
	return EXIT_SUCCESS;
}


void DisplayNumbers(int* myArray, int size) {
	for (int i = 0; i < size; i++)
		cout << myArray[i] << " ";

	cout << endl;
}



