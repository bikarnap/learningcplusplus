// Function pay(float workingHours) is defined, which calculates the weekly payment 
// payment till 40.00 hours is 10.00 euros per hour and hours exceeding 40.00 hours is paid
// 15.00 euros per hour

#include <iostream>
using namespace std; 

// Function prototype
float pay(float); 

int main() {

	//Function call example
	float workingHours; 
	cout << "Enter the working hours: ";
	cin >> workingHours;
	cout << "Earnings for working " << workingHours << " hours is " << pay(workingHours) << " eruos.";
	cout << endl; 
	return EXIT_SUCCESS; 
}

// Function definition
float pay(float weeklyWorkingHours) {
	const float BASE_WAGE = 10.00; // 10 euros per hour
	const float NOMINAL_HOURS = 40.00; // full-time working hour per week
	const float OVERTIME_WAGE = 15.00; // overtime pay per hour
	float earnings; // total earnings per week

	if (weeklyWorkingHours > NOMINAL_HOURS)
		earnings = NOMINAL_HOURS * BASE_WAGE + (weeklyWorkingHours - NOMINAL_HOURS) * OVERTIME_WAGE;
	else
		earnings = weeklyWorkingHours * BASE_WAGE; 

	return earnings; 
}