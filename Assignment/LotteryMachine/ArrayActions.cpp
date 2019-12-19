/*
// This file has functions related to array generation, array comparison, and array combination
// 
// GenerateArray function generates an array of given size within the defined minimum and maximum 
// value of the elements
//
// CombineArray function combines two arrays
//
// CompareArray function compares two arrays of the same size in order to find if an element of one array
// is present in the other array too.
*/

#include <iostream>
#include "ArrayActions.h"
using namespace std;

// Function to generate array
int* GenerateArray(int arraySize, int min, int max) {
	int* generatedArray = new int[arraySize];
	generatedArray[0] = rand() % max + min;
	bool isDuplicate = false; // flag for checking if the random number generated is already present
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

// Function to compare two arrays of same size for duplicate values
Results CompareArray(int* playerArray, int* autoArray, int size, int compareType) {
	int* matchedNumbers= new int[size];
	string matched; 
	int count = 0 ;
	if (compareType == 1)
		matched = "main";
	else
		matched = "bonus";
	cout << endl;
	cout << ">> Matched " << matched <<" lottery numbers are: ";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (autoArray[i] == playerArray[j]) {
				matchedNumbers[i] = autoArray[i];
				cout << matchedNumbers[i] << " ";
				count += 1;
			}
		}
	}
	cout << "\n>> Matched " << matched  << " number count: " << count;
	cout << endl;
	Results results;
	results.numbers = matchedNumbers;
	results.number = count;

	return results;
}

