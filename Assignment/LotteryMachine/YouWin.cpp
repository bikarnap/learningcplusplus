/*
// Function YouWin checks the user's/player's lottery numbers against the numbers generated in the
// lottery draw. It then gives the results of number of main and bonus lottery numbers matched. In
// addition, it also gives the result of won amount, if there is a win.
// Finally, it prints the results
// The prize is: all 7 main numbers matched = Jackpot (can be 1 million euros for example)
//               6 main numbers matched + at least one bonus number matched = 50000 euros
//               6 main numbers matched = 40000 euros
//               5 main numbers matched + at least one bonus number matched = 35000 euros
//               5 main numbers matched = 25000 euros
//               4 main numbers matched = 10000 euros
//               3 main numbers matched = 500 euros
//               2 main numbers matched = 25 euros
//
// Coded by: Bikarna Pokharel
//               
*/
#include <iostream>
#include "ArrayActions.h"
using namespace std;

void YouWin(Results mainMatched, Results bonusMatched) {
	string prizeMoney = "0"; // initialization of the won money
	string matched = "0+0"; // matched main numbers count + matched bonus numbers count
	switch (mainMatched.number) {
	case 7:
		prizeMoney = "Jackpot";
		matched = "7";
		break;
	case 6:
		if (bonusMatched.number >= 1) {
			prizeMoney = "50000";
			matched = "6 + 1";
		}
		else {
			prizeMoney = "40000";
			matched = "6";
		}
		break;
	case 5:
		if (bonusMatched.number >= 1) {
			prizeMoney = "35000";
			matched = "5 + 1";
		}
		else {
			prizeMoney = "25000";
			matched = "5";
		}
			
		break;
	case 4:
		prizeMoney = "10000";
		matched = "4";
		break;
	case 3:
		prizeMoney = "500";
		matched = "3";
		break;
	case 2:
		prizeMoney = "25";
		matched = "2";
		break;
	default:
		break;
	}
	if (prizeMoney != "0") {
		cout << "\nWinning criteria: You have matched " << matched << " numbers\n\n";
		cout << "    ****\\\n"
			<< "  *\n"
			<< " |\n"
			<< " |         Congrutulations...You win " << prizeMoney << " euros\n"
			<< "  \\           *\n"
			<< "   *        *\n"
			<< "       ****\n";
		
	}
		
	else
		cout << "\nSorry no win this time\n";
}