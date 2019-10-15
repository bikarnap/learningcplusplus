// Lottery machine

#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std; 

// Function prototypes
int* generateArray(int, int, int);
int* combineArray(int*, int*, int, int);

int main() {
	cout << "Lottery machine\n";
	cout << "=================\n";

	int* lotteryNumbers = generateArray(7, 1, 39);
	cout << "\n";
	int* bonusNumbers = generateArray(3, 1, 39);
	int* combinedNumbers = combineArray(lotteryNumbers, bonusNumbers, 7, 3);

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

int *combineArray(int* array1, int * array2, int size1, int size2) {
	int array1Size = size1;
	int array2Size = size2;
	int* combinedArray;
	combinedArray = new int[array1Size + array2Size] ;
	
	cout << "\n";
	for (int i = 0; i < array1Size + array2Size; i++) {
		srand(rand() % 39 + 1);
		if (i < array1Size)
			combinedArray[i] = array1[i];
		else
			combinedArray[i] = array2[i - array1Size];

		cout << combinedArray[i] << " ";
	}

	return combinedArray;
}