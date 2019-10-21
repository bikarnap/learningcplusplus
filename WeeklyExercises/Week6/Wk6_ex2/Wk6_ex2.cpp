//

#include <iostream>
using namespace std; 

int main() {
	int numOfSeconds; 
	double dropVelocity; 
	const double g = 9.81; // value of accleration due to gravity 9.81 m/s^2

	cout << "How many number of seconds do you want to calculate drop velocity? "; 
	cin >> numOfSeconds;
	cout << "Time\t" << "Speed (km/h)\n";
	for (int i = 0; i <= numOfSeconds; i++) {
		int t = i; // t is the time
		dropVelocity = 0.5 * g * t * t; // result in m/s
		dropVelocity = dropVelocity * 3.6; // velocity converted to km/h
		cout << t << "\t" << dropVelocity << "\n";
	}
	cout << "\n";

	return EXIT_SUCCESS;
}