// Lottery machine

#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std; 
int* generateArray(int, int, int);
int *combineArray(int[], int[]);

int main() {
	cout << "Lottery machine\n";
	cout << "=================\n";

	//int lotteryNumbers[7];
	//int bonusNumbers[3];
	//int lotterySize = sizeof(lotteryNumbers) / sizeof(int);
	//cout << "\n" << lotterySize;

	int* lotteryNumbers = generateArray(7, 1, 39);
	cout << "\n";
	int* bonusNumbers = generateArray(3, 1, 39);
	int* combinedNumbers = combineArray(lotteryNumbers, bonusNumbers);

	/*int combinedNumbers[7 + 3]; 
	for (int i = 0; i < (7 + 3); i++) {
		if (i < 7) {
			combinedNumbers[i] = lotteryNumbers[i]; 
		}
		else {
			combinedNumbers[i] = bonusNumbers[i - 7];
		}

		cout << combinedNumbers[i] << " ";

		
	}*/
	
	
	/*
	for(int i = 0; i < lotterySize; i++) {
		int number = rand() % 39 + 1; 
		lotteryNumbers[i] = number; 
		cout << number << " "; s
	}
	*/
		 
		
	
	return 0; 
}

int* generateArray(int arraySize, int min, int max) {
	
	int* generatedArray; 
	generatedArray = new int[arraySize];

	srand(time(NULL));

	for (int i = 0; i < arraySize; i++) {
		int element = rand() % max + min; 
		generatedArray[i] = element; 
		cout << element <<" "; 
	}

	return generatedArray; 
	
}

int *combineArray(int array1[], int array2[]) {
	int array1Size = sizeof(array1) / sizeof(int);
	int array2Size = sizeof(array2) / sizeof(int);
	int* combinedArray;
	combinedArray = new int[array1Size + array2Size] ;
	for (int i = 0; i < array1Size + array2Size; i++) {
		if (i < array1Size)
			combinedArray[i] = array1[i];
		else
			combinedArray[i] = array2[i - array1Size];

		cout << combinedArray[i] << " ";
	}

	return combinedArray;
}