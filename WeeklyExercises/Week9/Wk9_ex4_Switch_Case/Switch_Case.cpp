
#include <iostream>
using namespace std; 

int main() {
	float number1, number2;		
	float calculation;
	int operation; 
	cout << "Enter two numbers: "; 
	cin >> number1 >> number2; 
	cout << "What mathematical operation do you want to do "
		<< "with these two numbers?\n";
	cout << "Choose 1 - if you want to add the numbers\n"
		<< "Choose 2 - if you want to subtract the numbers\n"
		<< "Choose 3 - if you want to multiply the numbers\n"
		<< "Choose 4 - if you want to divide the numbers\n";
	cin >> operation; 

	switch (operation) {
	case 1:
		calculation = number1 + number2; 
		break; 
	case 2: 
		calculation = number1 - number2;
		break; 
	case 3:
		calculation = number1 * number2; 
		break;
	case 4: 
		calculation = number1 / number2;
		break;
	default:
		cout << "No such operation is possible\n";
		calculation = 0;
		break;
	}
	
	cout << "The calculation of selected operation is: " << calculation;

	return EXIT_SUCCESS;

}