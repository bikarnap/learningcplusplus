// Calculator: only with integer numbers, but when division is done the result is casted to double

#include <iostream>
using namespace std; 

int main() {
	int number1, number2; 
	char calculation;

	cout << "Give the calculation (+, -, /, or *): "; 
	cin >> calculation; 

	cout << "Give the first number: "; 
	cin >> number1; 
	cout << "Give the second number: "; 
	cin >> number2; 

	switch (calculation) {
	case '+':
		cout << "The sum of the given numbers is " << (number1 + number2); 
		break; 

	case '-': 
		cout << "The difference of the given numbers is " << (number1 - number2); 
		break; 

	case '/': 
		cout << "Thd division of the given numbers is " << static_cast<double>(number1)/(number2); 
		break; 
	case '*': 
		cout << "The product of the given nubmers is " << (number1 * number2);
		break;
	default: 
		cout << "The calculation you are trying to perform is not supported!"; 
		break; 
	}
	cout << "\n";
	return 0;

}