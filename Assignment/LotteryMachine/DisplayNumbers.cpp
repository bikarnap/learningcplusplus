/*
// Function DisplayNumbers takes an array input and displays the array either as sorted (in descending
// order) or unsorted
//
// Coded by: Bikarna Pokharel
*/

#include <iostream>
#include <algorithm>
using namespace std;

void DisplayNumbers(int* myArray, int size, bool sorted) {
	if (sorted) {
		sort(myArray, myArray + size, greater<int>());
		cout << "\n>> Sorted in descending order:";
		for (int i = 0; i < size; i++)
			cout << myArray[i] << " ";
	}
	else {
		for (int i = 0; i < size; i++)
			cout << myArray[i] << " ";
	}
}




