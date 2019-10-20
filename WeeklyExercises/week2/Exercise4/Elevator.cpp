// Week2 - Exercise 4 - Elevator.cpp 
// program determines if the elevator works or not based on its carrying capacity

#include <iostream>
using namespace std; 

int main() {
	double capacity,weight1, weight2, weight3, weight4;
	double totalWeight;
	cout << "What is the carrying capacity of the elevator? ";
	cin >> capacity; 
	cout << "Enter the weights of four persons separated by a space: "; 
	cin >> weight1 >> weight2 >> weight3 >> weight4;
	totalWeight = weight1 + weight2 + weight3 + weight4; 

	if (totalWeight > capacity) {
		cout << "The total weight is " << totalWeight << ", which is greater than " << capacity;
		cout << "\nOverload!!!"; 
	}
	else {
		cout << "Elevator at your disposal :)";
	}

	return 0; 


}