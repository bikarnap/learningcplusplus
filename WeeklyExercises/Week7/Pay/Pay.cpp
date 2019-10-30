#include <iostream>
using namespace std; 

float pay(float); 

int main() {

	return EXIT_SUCCESS; 
}

float pay(float weeklyWorkingHours) {
	const float BASE_WAGE = 10; 
	const float NOMINAL_HOURS = 40; 
	const float OVERTIME_WAGE = 15; 
	float earnings; 

	if (weeklyWorkingHours > NOMINAL_HOURS)
		earnings = NOMINAL_HOURS * BASE_WAGE + (weeklyWorkingHours - NOMINAL_HOURS) * OVERTIME_WAGE;
	else
		earnings = weeklyWorkingHours * BASE_WAGE; 

	return earnings; 
}