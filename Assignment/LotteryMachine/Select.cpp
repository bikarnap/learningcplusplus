/**/
#include <iostream>
#include "Header.h"
using namespace std;

void SelectOption(int lotterySize, int bonusSize, int min, int max) {
	int selection;
	int* lotteryEntries = new int[lotterySize];
	int* bonusEntries = new int[bonusSize];
	cin >> selection;
	switch (selection) {
	case 0:
		exit(0);
		break;
	case 1:
		lotteryEntries = SelectNumbers(lotterySize, min, max);
		DisplayNumbers(lotteryEntries, lotterySize);
		break;
	case 2:
		lotteryEntries = generateArray(lotterySize, min, max);
		DisplayNumbers(lotteryEntries, lotterySize);
		break;
	case 3:
		bonusEntries = SelectNumbers(bonusSize, min, max);
		DisplayNumbers(bonusEntries, bonusSize);
		break;
	case 4:
		bonusEntries = generateArray(bonusSize, min, max);
		DisplayNumbers(bonusEntries, bonusSize);
		break;
	default:
		break;
	}
	DisplayResult(lotteryEntries, lotteryEntries, lotterySize, min, max);
}

int* SelectNumbers(int arraySize, int min, int max) {
	int number;
	int* numbersArray = new int[arraySize];
	cout << "Enter " << arraySize << "unique numbers you want to make selection (min= " << min << ", max= " << max << ")\n";
	for (int i = 0; i < arraySize; i++) {
		cin >> number;
		numbersArray[i] = number;
	}

	return numbersArray;
}