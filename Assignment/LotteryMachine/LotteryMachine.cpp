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

	srand(time(0));
	DisplayWelcome();
	DisplayMenu();
	SelectOption(LOTTERY_SIZE, BONUS_SIZE, MIN, MAX);
	//OpenLottery(LOTTERY_SIZE, BONUS_SIZE, MIN, MAX);
	
	
	return EXIT_SUCCESS;
}






