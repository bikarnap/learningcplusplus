// Program to compare the heights of two persons and print out who is taller

#include <iostream>
using namespace std;

int main() {
	double height1, height2; 
	cout << "Give the height of the first person: ";
	cin >> height1; 
	cout << "Give the height of the second person: ";
	cin >> height2; 

	if (height1 > height2) {
		cout << "The first person with height " << height1 << " is taller than the second person with height " << height2 <<"."; 
	}
	else if(height2 > height1) {
		cout << "The second person with height " << height2 << " is taller than the first person with height " << height1 <<".";
	}
	else {
		cout << "Both persons are of same height.";
	}

	return 0; 
	
}