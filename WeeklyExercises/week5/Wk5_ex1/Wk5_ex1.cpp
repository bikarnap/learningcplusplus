// While loop 
// (a) Prints 5 4 3 2 1 0 -1 -2 -3 -4 -5
// (b) printing even numbers between 1 and 50

#include <iostream>
using namespace std; 

int main() {
	int counter = 5; 
	int evenCheck= 1; 

	while (counter > -6) {
		cout << counter << " "; 
		counter--; 
	}

	cout << "\nThe even numbers (1-50) are: ";
	while (evenCheck <= 50) {
		if (evenCheck % 2 == 0) {
			cout << evenCheck << " ";
		}
		evenCheck++;
	}

	return 0; 
}