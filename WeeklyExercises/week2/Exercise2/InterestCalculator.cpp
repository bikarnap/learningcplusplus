// Interest Calculator
// Program asks for loan amount, time of loan in years, and the rate of interest
// Interest is calculated as: interest = amount * timeInYears * rate

#include <iostream>
using namespace std; 

int main() {
	int amount, timeInYears; 
	double rate, interest;
	cout << "Give the amount of loan: "; 
	cin >> amount; 
	cout << "Loan time in years: "; 
	cin >> timeInYears; 
	cout << "Interest rate: "; 
	cin >> rate; 
	interest = static_cast<double>(amount * timeInYears) * rate / 100; 
	cout << "The amount of interest during loan time: " << interest << " euros"; 

	return 0; 


}