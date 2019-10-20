#include <iostream>
using namespace std; 

int main() {
	double base, height, surfaceArea; 
	cout << "Give the base of the triangle in meters: "; 
	cin >> base; 
	cout << "Give the height of the triangle in meters: "; 
	cin >> height; 
	surfaceArea = 0.5 * base * height; // Area of triangle = 1/2 * (base * height)
	cout << "Area of the triangle is: " << surfaceArea << " square meters"; 

	return 0; 
	
}