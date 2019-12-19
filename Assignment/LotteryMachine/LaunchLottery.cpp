/*
// LaunchLottery function launches the actual lottery game. It calls the function to allow the user 
// to choose their main and bonus lottery numbers using Interact function.
// After that, it draws the lottery calling the DrawLottery function
// It compares the main and bonus lottery numbers and outputs the lottery result 
// The outputs include number of matched main and bonus lottery numbers
// It also asks if the player wants to play the lottery game again or not.
//
// Coded by: Bikarna Pokharel
*/

#include <iostream>
#include "ArrayActions.h"
#include "Display.h"
#include "Lottery.h"
#include "PrintLine.h"
using namespace std;

void LaunchLottery(int mainSize, int bonusSize, int min, int max) {
	char playAgain = 'y'; // flag for asking user if game is played again or not

	while (playAgain == 'y') {
		int* playerChoiceMain = Interact(mainSize, min, max, 1); // Main lottery numbers selection
		int* playerChoiceBonus = Interact(bonusSize, min, max, 2); // Bonsu lottery numbers selection
		cout << "\nLottery Draw\n\n";
		int* mainDraw = DrawNumbers(mainSize, min, max, 1); // Lottery draw for the main numbers
		int* bonusDraw = DrawNumbers(bonusSize, min, max, 2); // Lottery draw for the bonus numbers
		cout << "\nMain lottery numbers after sorting";
		DisplayNumbers(mainDraw, mainSize, true);
		cout << "\n\nBonus lottery numbers after sorting";
		DisplayNumbers(bonusDraw, bonusSize, true);

		// Matching the drawn numbers with the players numbers
		cout << "\n\nLottery Result\n";
		Results mainMatched = CompareArray(playerChoiceMain, mainDraw, mainSize, 1); 
		Results bonusMatched = CompareArray(playerChoiceBonus, bonusDraw, bonusSize, 2);

		// Callin the function YouWin to display the final winning result on the console
		YouWin(mainMatched, bonusMatched);
		PrintLine();
		cout << "\nDo you want to play it again?\n"
			<< "Enter 'y' to play again or any other key to exit: ";
		cin >> playAgain;
		PrintLine();
	}	
}
