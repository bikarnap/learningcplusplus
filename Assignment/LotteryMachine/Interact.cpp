/*
// Interact function is meant to make interaction between the player and the lottery game. It asks the 
// user/player to select the lottery numbers (main and bonus). The numbers are selected either manually or
// automatically generated on the basis of the user's choice
// It then display the selected/generated numbers in descending order
// The parameter numberType is meant to check if it is related to main or bonus numbers
//
// Coded by: Bikarna Pokharel
*/

#include <iostream>
#include "PrintLine.h"
#include "ArrayActions.h"
#include "Display.h"
#include "Lottery.h"
using namespace std;

int* Interact(int lotteryOrBonusSize, int min, int max, int numberType) {
	string lotteryOrBonus;
	if (numberType == 1)
		lotteryOrBonus = "main";
	else
		lotteryOrBonus = "bonus";
	int selection;
	int selectCount = 0;
	int* choiceEntries = new int[lotteryOrBonusSize]; // for storing user's lottery numbers
	cout << "From the available options, choose an option for the " << lotteryOrBonus <<" lottery numbers\n>> ";
	while (!(cin >> selection)) {
		cout << "Wrong input type, please try again\n>> ";
		cin.clear();
		cin.ignore();
	}
	switch (selection) {
	case 0:
		cout << ">> You have chosen to exit. Exiting...";
		exit(0);
	case 1:
		cout << ">> You have chosen to manually select the main lottery numbers.\n";
		choiceEntries = SelectNumbers(lotteryOrBonusSize, min, max);
		DisplayNumbers(choiceEntries, lotteryOrBonusSize, true);
		PrintLine();
		break;
	case 2:
		cout << ">> Automatically generated main lottery numbers for you are:\n";
		choiceEntries = GenerateArray(lotteryOrBonusSize, min, max);
		DisplayNumbers(choiceEntries, lotteryOrBonusSize, false);
		DisplayNumbers(choiceEntries, lotteryOrBonusSize, true);
		PrintLine();
		break;
	case 3:
		cout << ">> You have chosen to manually select the bonus lottery numbers.\n";
		choiceEntries = SelectNumbers(lotteryOrBonusSize, min, max);
		DisplayNumbers(choiceEntries, lotteryOrBonusSize, true);
		PrintLine();
		break;
	case 4:
		cout << ">> Automatically generated bonus lottery numbers for you are:\n";
		choiceEntries = GenerateArray(lotteryOrBonusSize, min, max);
		DisplayNumbers(choiceEntries, lotteryOrBonusSize, false);
		DisplayNumbers(choiceEntries, lotteryOrBonusSize, true);
		PrintLine();
		break;
	default:
		cout << "You have entered " << selection <<" as an option.\n"
			<< "Sorry this option is not available. Game exiting...\n";
		exit(0);
	}
	cout << endl;
	return choiceEntries;
}

