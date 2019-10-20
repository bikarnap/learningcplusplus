#include <iostream>
using namespace std; 

int main() {
	int counter = 0, userInput; // for the first loop
	int i = 1; // for the second loop

	cout << "How many times you want to run the while loop? "; 
	cin >> userInput; 

	//First loop
	cout << "Output from the first loop:\n";
	while (counter < userInput) {
		cout << "Hello World\n"; 
		counter++; 
	}
	cout << "************************************\n"; 
	//Second loop
	cout << "Output from the second loop:\n";
	while (i <= 15) {
		cout << i << " ";
		i++;
	}
	cout << "\n";


	/*
	cout << "Second loop using for-loop\n";
	for (int i = 1; i <= 15; i++) {
		cout << i << " ";
	}
	*/
	
	return 0; 
}