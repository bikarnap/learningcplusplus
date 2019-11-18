// Function: float Fareprice(float, float, float)

#include <iostream>
using namespace std;
// Function prototype
float FarePrice(float, float, float);

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

// Function definition
float FarePrice(float distanceTravelled, float fuelConsumption, float fuelPrice) {
	const float BASE_FARE = 9.50; // 9.50 euros starting price
	const float profitPercent = 1; // 100% profit
	float investment = (distanceTravelled * fuelConsumption * fuelPrice) / 100; 
	float profit = profitPercent * investment;
	float priceToPay = BASE_FARE + investment + profit;
	return priceToPay; 
}
