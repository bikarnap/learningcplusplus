/*
// Main function of the program
//
// A program to simulate lottery. 
// Lottery numbers will be generated that are in the range of MIN and MAX inclusive
// User/player can manually enter the numbers or get randomly generated numbers within the defined limits
// Additionally, bonus numbers can also be entered manually or generated randomly
// After lottery numbers (main and bonus) are entered, program draw the lottery, and displays the result to the 
// user
//
// Coded by: Bikarna Pokharel
*/

#include <iostream>
#include <algorithm>
#include <time.h>
#include "Lottery.h"
#include "ArrayActions.h"
#include "Display.h"
#include "PrintLine.h"
using namespace std; 

int main() {
	int const MAX = 39; // maximum value of main/bonus lottery number
	int const MIN = 1; // minimum value of main/bonus lottery number
	int const MAIN_SIZE = 7; // # of main lottery numbers
	int const BONUS_SIZE = 3; // # of bonus lottery numbers

	srand(time(0)); // To generate different random numbers, when random generating functionis called
	DisplayWelcome(); // Displays the Welcome message on the console window
	DisplayMenu(); // Display the available lottery game options to the user 
	LaunchLottery(MAIN_SIZE, BONUS_SIZE, MIN, MAX); // Lottery numbers selection and result of the lottery
	
	return EXIT_SUCCESS;
}