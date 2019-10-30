// Program to find the weight index and display message as follows: 
/*
	Weight index			Message
=============================================
	<= 20.7				underweight
	<= 26.4				normal weight
	<= 27.8				slightly overweight
	<= 31.1				overweight
	> 31.1				obese
============================================= 
*/

#include <iostream>
using namespace std; 

int main() {
	double weight, height, weightIndex;
	string weightIndexCondition; 

	cout << "Input your weight: "; 
	cin >> weight; 

	cout << "Input your height: ";
	cin >> height;

	weightIndex = weight / (height * height); 

	if (weightIndex <= 20.7) {
		weightIndexCondition = "underweight";
	}
	else if (weightIndex <= 26.4) {
		weightIndexCondition = "normal weight";
	}
	else if (weightIndex <= 27.8) {
		weightIndexCondition = "slightly overweight"; 
	}
	else if (weightIndex <= 31.1) {
		weightIndexCondition = "overweight"; 
	}
	else {
		weightIndexCondition = "obese";
	}
	cout << "According to your input weight and height, the weight index is " << weightIndex << ".\n";
	cout << "And you are " << weightIndexCondition << ".\n"; 

	return 0; 
}