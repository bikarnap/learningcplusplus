// Lottery machine

#include <iostream>
#include <algorithm>
#include <time.h>
#include "Header.h"
using namespace std; 

int main() {
	int input = 0;
	int const MAX = 39;
	int const MIN = 1;
	int const LOTTERY_SIZE = 7;
	int const BONUS_SIZE = 3;
	DisplayWelcome();
	DisplayMenu();
	srand(time(0));
	while (input != 1) {
		int* lotteryNumbers = generateArray(LOTTERY_SIZE, MIN, MAX);
		int* bonusNumbers = generateArray(BONUS_SIZE, MIN, MAX);
		sort(lotteryNumbers, lotteryNumbers + LOTTERY_SIZE);
		sort(bonusNumbers, bonusNumbers + BONUS_SIZE);
		int* combinedNumbers = combineArray(lotteryNumbers, bonusNumbers, LOTTERY_SIZE, BONUS_SIZE);
		for (int i = 0; i < (LOTTERY_SIZE + BONUS_SIZE); i++) {
			cout << combinedNumbers[i] << " ";
		}
		cout << "\nExit?" << endl; 
		cin >> input; 
	}
	return EXIT_SUCCESS;
}

int SelectOption(int size) {
	int selection; 
	cin >> selection; 
	switch (selection) {
	case 0: 
		exit(0);
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		break;
	}
	
}




