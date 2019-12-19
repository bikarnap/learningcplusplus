/*
// Function DisplayMenu displays the options available to the user/player using couts
//
// Coded by: Bikarna Pokharel
*/

#include <iostream>
#include "PrintLine.h"
using namespace std;

void DisplayMenu() {
	cout << "Lottery Menu\n";
	cout << "Options Available\n";
	cout << "1 - Enter the main lottery numbers yourself\n"
		<< "2 - Automatically generate the main lottery numbers\n"
		<< "3 - Enter the bonus lottery numbers yourself\n"
		<< "4 - Automatically generate bonus lottery numbers\n"
		<< "0 - Exit the game\n";
	PrintLine();
}