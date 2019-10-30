// Functions
// Function to caculate the payment based on weekly hours worked -  float pay(weeklyWorkingHours)

#include <iostream>
using namespace std;

// Function prototype
float pay(float);

int main() {
  float weeklyWorkingHours; 
  cout << "Enter the weekly working hours: ";
  cin >> weeklyWorkingHours;
  cout << "Your total payment is: " << pay(weeklyWorkingHours); 

  return EXIT_SUCCESS;
}

float pay(float weeklyWorkHours) {
	const float BASIC_WAGE = 10.0; // Normal wage euros per hour
	const float NOMINAL_HOURS = 40.0; // Nominal working hours per week
	const float OVERTIME_WAGE = 15.0; // Wage if working hours per week goes over the nominal hours/ euros per hour
	float earnings; // Total earnings per week
	if (weeklyWorkHours > NOMINAL_HOURS)
		earnings = NOMINAL_HOURS * BASIC_WAGE + (weeklyWorkHours - NOMINAL_HOURS) * 15;
	else
		earnings = weeklyWorkHours * BASIC_WAGE;


	return earnings; 
}