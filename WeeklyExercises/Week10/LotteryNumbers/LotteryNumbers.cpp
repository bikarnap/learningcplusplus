/**/
#include <iostream>
#include<time.h>
using namespace std; 

void LotteryNumbers(int *, int);

int main() {
	int myArray[5]; 
	LotteryNumbers(myArray, 5);
	for (int el : myArray)
		cout << el << " ";
 	return EXIT_SUCCESS;
}

void LotteryNumbers(int *numbers, int size) {
	int randomNumber; 
	srand(time(0));
	for (int i = 0; i < size; i++) {
		randomNumber = rand() % 39 + 1; 
		numbers[i] = randomNumber;
	}

}