/*
***Dice simulation program***
Program that asks number of faces of a dice and the number of times the dice is rolled.
Then it prints all the results of rolling
*/

#include <iostream>
#include <time.h>
using namespace std; 

int main() {
	int rollTimes, numberOfFaces, singleResult;
	cout << "How many faces? "; 
	cin >> numberOfFaces; 
	cout << "How many times the dice is thrown? ";
	cin >> rollTimes; 
	cout << "Result\n";
	srand(time(0));
	for (int i = 0; i < rollTimes; i++) {
		singleResult = rand() % numberOfFaces + 1; 
		cout << singleResult <<"\n";
	}

	return EXIT_SUCCESS; 
}