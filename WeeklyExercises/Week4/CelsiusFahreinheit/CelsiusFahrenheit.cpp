// Program to convert Celsius to Fahrenheit and vice-versa

#include <iostream>
using namespace std; 

int main() {
	double temperature; 
	double convertedTemp;
	char unit; 

	cout << "Give the temperature: "; 
	cin >> temperature; 
	cout << "Give the unit (C = Celsius or F = Fahrenheit): ";
	cin >> unit; 
	if (unit == 'C' || unit == 'F') {
		string fullUnitOriginal, fullUnitConverted;
		if (unit == 'C') {
			convertedTemp = temperature * (9.0 / 5.0) + 32.00;
			fullUnitOriginal = "Celsius";
			fullUnitConverted = "Fahrenheit";
		}
		else {
			convertedTemp = (temperature - 32.00) * (5.0 / 9.0);
			fullUnitOriginal = "Fahrenheit";
			fullUnitConverted = "Celsius";
		}
		cout << temperature <<" " << fullUnitOriginal << " = " << convertedTemp << " " << fullUnitConverted << "\n";
	} else 
		cout << "Invalid temperature input!\n"; 

	return 0; 

}