// Finding the biggest number among three entered numbers (very simple if-else if-else)
// Note: 1. The numbers must be different
//       2. If two or three numbers are the same, the biggest number is the last number entered
//			For example: number1 = 23, number2 = 12, number3 = 23 => number3 is the biggest

#include <iostream>
using namespace std;

int main(){
	int firstNumber, secondNumber, thirdNumber; 
	cout << "Enter three numbers separated by space.\n";
	cin >> firstNumber >> secondNumber >> thirdNumber; 

	if (firstNumber > secondNumber) {
		if (firstNumber > thirdNumber) {
			cout << "The first number, " << firstNumber << ", was the biggest."; 
		}
		else {
			cout << "The third number, " << thirdNumber << ", was the biggest."; 
		}
	}
	else if (secondNumber > thirdNumber) {
		cout << "The second number, " << secondNumber << ", was the biggest.";
	}
	else {
		cout << "The third number, " <<thirdNumber << ", was the biggest.";
	}

	cout << "\n"; 

	return 0; 
}