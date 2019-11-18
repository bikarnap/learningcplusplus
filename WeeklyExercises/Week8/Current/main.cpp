#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	float voltage, resistance; 
	cout << "Enter the voltage in volts: ";
	cin >> voltage; 
	cout << "Enter the resitance in ohms: "; 
	cin >> resistance; 

	cout << "The current with voltage of " << voltage << " volts and resistance of " << resistance
		<< " ohms is " << current(voltage, resistance) << " A."; 

	return EXIT_SUCCESS;
}