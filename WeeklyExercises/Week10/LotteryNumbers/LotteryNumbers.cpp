/**/
#include <iostream>
#include<time.h>
using namespace std; 

void LotteryNumbers(int *, int, int, int); // function prototype

int main() {
	const int SIZE = 7;
	int lotteryNumbers[SIZE];
	LotteryNumbers(lotteryNumbers, SIZE, 39, 1);
	for (int lottery : lotteryNumbers)
		cout << lottery << " ";

 	return EXIT_SUCCESS;
}

void LotteryNumbers(int *numbers, int size, int max, int min) { // function definition
	int randomNumber; 
	srand(time(0));
	for (int i = 0; i < size; i++) {
		randomNumber = rand() % max + min; 
		numbers[i] = randomNumber;
	}

}