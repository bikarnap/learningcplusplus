/**/
#include <iostream>
#include <algorithm>
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
	printLine();
}

void DisplayRawNumbers(int* myArray, int size) {
	for (int i = 0; i < size; i++)
		cout << myArray[i] << " ";
	//printLine();

}

void DisplaySortedNumbers(int* myArray, int size) {
	sort(myArray, myArray + size, greater<int>());

	cout << ">> Sorted in descending order:";
	for (int i = 0; i < size; i++)
		cout << myArray[i] << " ";
	//printLine();
}
void OpenLottery(int lotterySize, int bonusSize, int min, int max) {
	int* lotteryNumbers = GenerateArray(lotterySize, min, max);
	DisplayRawNumbers(lotteryNumbers, lotterySize);
	printLine();
	int* bonusNumbers = GenerateArray(bonusSize, min, max);
	DisplayRawNumbers(bonusNumbers, bonusSize);
	printLine();
	int* combinedNumbers = CombineArray(lotteryNumbers, bonusNumbers, lotterySize, bonusSize); 
	printLine();
	DisplayRawNumbers(combinedNumbers, (lotterySize + bonusSize));
	printLine();
}
void DisplayResult(int* userArray, int lotteryOrBonusSize, int min, int max) {
	int* lotteryResult = GenerateArray(lotteryOrBonusSize, min, max);
	cout << ">> Result numbers are:\n>>";
	for (int i = 0; i < lotteryOrBonusSize; i++) {
		cout << lotteryResult[i] << " ";
	}
	cout << endl;
	int* matchedLotteryNumbers = CompareArray(userArray, lotteryResult, lotteryOrBonusSize);
	int matchedSize = sizeof(matchedLotteryNumbers);
	cout << "Number of matched lottery numbers is: " << matchedSize;

}

void printLine() {
	cout << "\n\n";
	for (int i = 1; i < 99; i++) {
		if (i % 2 == 0)
			cout << "-";
		else
			cout << "+";
	}
	
}