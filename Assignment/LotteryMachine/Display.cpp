/**/
#include <iostream>
#include "Header.h"
using namespace std;

void DisplayWelcome() {
	for (int i = 0; i < 101; i++) {
		if (i == 50)
			cout << "\n\tWelcome to this Lottery Game\n";
		else
			cout << "*";
	}
	cout << endl;
}

void DisplayMenu() {
	cout << "Lottery Menu\n";
	cout << "Options Available\n";
	cout << "1 - Enter the lottery numbers yourself\n"
		<< "2 - Automatically generate lottery numbers\n"
		<< "3 - Enter the bonus numbers yourself\n"
		<< "4 - Automatically generate bonus numbers\n"
		<< "0 - Exit the game\n";
}

void DisplayResult(int* lotteryOrBonus, int* userArray, int lotteryOrBonusSize, int min, int max) {
	int* lotteryResult = new int[lotteryOrBonusSize];
	
	//int* matchedLotteryNumbers = new int[];
	lotteryResult = generateArray(lotteryOrBonusSize, min, max);
	for (int i = 0; i < lotteryOrBonusSize; i++) {
		cout << lotteryResult[i] << " ";
	}
	cout << endl;
	int* matchedLotteryNumbers = CompareArray(userArray, lotteryResult, lotteryOrBonusSize);
	int matchedSize = sizeof(matchedLotteryNumbers);
	
	cout << endl;

}