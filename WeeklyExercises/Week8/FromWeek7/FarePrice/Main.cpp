#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	float distanceTravelled, fuelConsumption, fuelPrice;
	cout << "Enter the distance travelled: ";
	cin >> distanceTravelled;
	cout << "Enter the fuel consumption per 100 km: ";
	cin >> fuelConsumption;
	cout << "Enter the unit price of fuel in euros: ";
	cin >> fuelPrice;

	cout << "The fare is: " << FarePrice(distanceTravelled, fuelConsumption, fuelPrice) << " euros";
	cout << endl;
	return EXIT_SUCCESS;
}