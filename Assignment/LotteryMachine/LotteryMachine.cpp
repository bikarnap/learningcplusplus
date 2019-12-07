// Lottery machine

#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std; 

// Function prototypes
int* generateArray(int, int, int);
int* combineArray(int*, int*, int, int);
//bool Exists(int);


int main() {
	cout << "Lottery machine\n";
	cout << "=================\n";
	srand(time(0));
	int* lotteryNumbers = generateArray(7, 1, 39);
	cout << "\n";
	int* bonusNumbers = generateArray(3, 1, 39);
	int* combinedNumbers = combineArray(lotteryNumbers, bonusNumbers, 7, 3);

	return 0; 
}

int* generateArray(int arraySize, int min, int max) {
	int* generatedArray; 
	generatedArray = new int[arraySize];
	
	for (int i = 0; i < arraySize; i++) {
		int element = rand() % max + min; 
		bool isDuplicate = false;
		for (int j = 0; j < i+1; j++) {
			if (j > 1) {
				if (generatedArray[j] == element) {
					isDuplicate = true;
					break;
				}
					
				else
					isDuplicate = false;
			}
			
		}

		if (isDuplicate)
			i -= 1;
		else 
			generatedArray[i] = element; 
		cout << element <<" "; 
	}
	return generatedArray; 
}

int* combineArray(int* array1, int * array2, int size1, int size2) {
	int array1Size = size1;
	int array2Size = size2;
	int* combinedArray;
	combinedArray = new int[array1Size + array2Size] ;
	cout << "\n";
	for (int i = 0; i < (array1Size + array2Size); i++) {
		if (i < array1Size)
			combinedArray[i] = array1[i];
		else
			combinedArray[i] = array2[i - array1Size];
		cout << combinedArray[i] << " ";
	}
	return combinedArray;
}

/*bool Exists(int arrayToCheck, int element) {

	if (number)
		return true;
	else
		return false;
}*/