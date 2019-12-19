/* 
// A basic printing function
//
// Coded by: Bikarna Pokharel
*/
#include <iostream>
#include "PrintLine.h"
using namespace std;

void PrintLine() {
	cout << endl; 
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0)
			cout << "-";
		else
			cout << "+";
	}
	cout << endl; 
}
