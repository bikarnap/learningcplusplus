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

void DisplayWelcome() {
	for (int i = 0; i < 101; i++) {
		if (i == 50)
			cout << "\n\tWelcome to this Lottery Game\n";
		else
			cout << "*";
	}
	cout << endl;
}

void DisplayMenu() {
	cout << "Lottery Menu\n";
	cout << "Options Available\n";
	cout << "1 - Enter the lottery numbers yourself\n"
		<< "2 - Automatically generate lottery numbers\n"
		<< "3 - Enter the bonus numbers yourself\n"
		<< "4 - Automatically generate bonus numbers\n"
		<< "0 - Exit the game\n";

	
}

