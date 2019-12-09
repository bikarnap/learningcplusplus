/**/
#include <iostream>
#include "Header.h"
using namespace std;

int* generateArray(int arraySize, int min, int max) {
	int* generatedArray = new int[arraySize];
	generatedArray[0] = rand() % max + min;
	bool isDuplicate = false;
	int element;
	for (int i = 0; i < arraySize; i++) {
		element = rand() % max + min;
		for (int j = 0; j < i + 1; j++) {
			if (element == generatedArray[j]) {
				isDuplicate = true;
			}
		}
		if (isDuplicate) {
			i -= 1;
			isDuplicate = false;
		}
		else {
			generatedArray[i] = element;
			//cout << element << " "; 
		}
	}
	return generatedArray;
}

int* combineArray(int* array1, int* array2, int size1, int size2) {
	int array1Size = size1;
	int array2Size = size2;
	int* combinedArray;
	combinedArray = new int[array1Size + array2Size];
	cout << "\n";
	for (int i = 0; i < (array1Size + array2Size); i++) {
		if (i < array1Size)
			combinedArray[i] = array1[i];
		else
			combinedArray[i] = array2[i - array1Size];
		//cout << combinedArray[i] << " ";
	}
	return combinedArray;
}


int* CompareArray(int* userArray, int* autoArray, int size) {
	int* matchedNumbers = new int[size];
	for (int i = 0; i < size; i++) {
		for (int j = 1; j < i+1; j++) {
			if (userArray[i] == autoArray[j-1]) {
				matchedNumbers[i] = userArray[j-1];
				cout << matchedNumbers[i] << " ";
			}
		}
	}
	return matchedNumbers;
}

