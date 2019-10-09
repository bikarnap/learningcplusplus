// Petrol or diesel car use: Program determines which car is cheaper to use 

#include <iostream>
using namespace std; 

int main() {
	double priceOfPetrol, priceOfDiesel, petrolConsumption, dieselConsumption, dieselTax, kilometersPerYear; 
	double costOfPetrolCarUse, costOfDieselCarUse; 
	cout << "Enter the price of petrol: "; 
	cin >> priceOfPetrol; 
	cout << "Enter the price of diesel: "; 
	cin >> priceOfDiesel; 
	cout << "Enter the consumption of petrol (liters/100km): "; 
	cin >> petrolConsumption; 
	cout << "Enter the consumption of diesel (liters/100km): "; 
	cin >> dieselConsumption; 
	cout << "Give the diesel tax: "; 
	cin >> dieselTax;
	cout << "Give the amount of kilometers driven in a year: ";
	cin >> kilometersPerYear; 

	costOfPetrolCarUse = kilometersPerYear * petrolConsumption * priceOfPetrol; 
	costOfDieselCarUse = (kilometersPerYear * dieselConsumption * priceOfDiesel) + dieselTax;

	cout << "The cost of using petrol car is " << costOfPetrolCarUse << " per year.\n";
	cout << "The cost of using diesel car is " << costOfDieselCarUse << " per year.\n"; 

	if (costOfPetrolCarUse > costOfDieselCarUse) {
		cout << "Diesel car is cheaper to use.\n"; 
	}
	else if (costOfDieselCarUse > costOfPetrolCarUse) {
		cout << "Petrol car is cheaper to use.\n"; 
	}
	else {
		cout << "The cost of using either of the car is the same. Use either petrol or diesel car\n";
	}

	return 0; 
}
