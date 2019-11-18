// Function: float Fareprice(float, float, float)

#include <iostream>
#include "Header.h"
using namespace std;

float FarePrice(float distanceTravelled, float fuelConsumption, float fuelPrice) {
	const float BASE_FARE = 9.50; // 9.50 euros starting price
	const float profitPercent = 1; // 100% profit
	float investment = (distanceTravelled * fuelConsumption * fuelPrice) / 100; 
	float profit = profitPercent * investment;
	float priceToPay = BASE_FARE + investment + profit;
	return priceToPay; 
}
