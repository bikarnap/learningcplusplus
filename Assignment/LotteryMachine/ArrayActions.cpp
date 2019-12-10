/**/
#include <iostream>
#include "Header.h"
using namespace std;

int* GenerateArray(int arraySize, int min, int max) {
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

int* CombineArray(int* array1, int* array2, int size1, int size2) {
	int array1Size = size1;
	int array2Size = size2;
	int* combinedArray;
	combinedArray = new int[array1Size + array2Size];
	cout << endl;
	cout << "Combined numbers\n>> ";
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
	int* matchedNumbers= new int[size];
	int count = 0 ;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (autoArray[i] == userArray[j]) {
				matchedNumbers[i] = autoArray[i];
				cout << matchedNumbers[i] << " ";
				count += 1;
			}
		}
	}
	cout << "Match count: " << count << "\n";
	return matchedNumbers;
}

