/*
// Function DrawNumbers draws the lottery main/bonus numbers. Parameter numberCount is the number of numbers
// to be drawn; parameters min and max are the limits (inclusive) of numbers to be drawn, and drawType is to 
// identify whether the draw is for main or bonus lottery numbers.
// Additionally, this function also displays the sorted drawn numbers 
//
// Coded by: Bikarna Pokharel
*/

#include <iostream>
#include "ArrayActions.h"
#include <algorithm>
#include "Display.h"
using namespace std;

int* DrawNumbers(int numberCount, int min, int max, int drawType) {
	string lotteryorbonus;
	if (drawType == 1) {
		lotteryorbonus = "lottery";
	}
	else
		lotteryorbonus = "bonus";

	int* numbers = GenerateArray(numberCount, min, max);
	cout << ">> Drawn " << lotteryorbonus << " numbers are: ";
	DisplayNumbers(numbers, numberCount, false);
	cout << endl;

	return numbers;
}