// Functions 
// Function created float FarePrice(float, float, float) to calculate the fare 

#include <iostream>
using namespace std;

// Function prototype
float FarePrice(float, float, float);

int main() {
	float distance, gasConsumption, gasPrice; 
	cout << "Enter the distance travelled, gas consumed, and the price of gas: ";
	cin >> distance >> gasConsumption >> gasPrice;
	cout << FarePrice(distance, gasConsumption, gasPrice); 

  return 0; 
}

float FarePrice(float distance, float gasConsumption, float gasPrice) {
	const float BASE_FARE = 9.5; 
	float totalFare = BASE_FARE + (distance * gasConsumption) / gasPrice;
	return totalFare;
}