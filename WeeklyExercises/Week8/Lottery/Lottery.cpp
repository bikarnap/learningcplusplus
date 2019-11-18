#include <iostream>
#include <time.h>
using namespace std; 

int main() {
	const int SIZE = 7;
	int lotteryNumbers[SIZE]; 
	int lottery;
	srand(time(0));
	// for loop to initialize the array elements to 0
	for (int i = 0; i < SIZE; i++) {
		lotteryNumbers[i] = 0; 
	}
	cout << "Lottery numbers: ";
	for (int j = 0; j < SIZE; j++) {
		lottery = rand() % 39 + 1; 
		lotteryNumbers[j] = lottery; 
		cout <<lottery << " ";
	}

	return EXIT_SUCCESS;
	
}