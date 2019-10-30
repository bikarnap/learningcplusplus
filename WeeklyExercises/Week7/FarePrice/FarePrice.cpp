// Function: float Fareprice(float, float, float)

#include <iostream>
using namespace std;
// Function prototype
float FarePrice(float, float, float);

int main() {
	float distanceTravelled, fuelConsumption, fuelPrice; 
	cout << "Enter the distance travelled, fuel consumption, and the unit price of the fuel: "; 
	cin >> distanceTravelled >> fuelConsumption >> fuelPrice;
	cout << "The fare is: " << FarePrice(distanceTravelled, fuelConsumption, fuelPrice);

	return EXIT_SUCCESS; 
}

float FarePrice(float distanceTravelled, float fuelConsumption, float fuelPrice) {

}
