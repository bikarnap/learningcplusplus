#include <iostream>
using namespace std; 

struct Student {
	string firstName;
	string lastName;
	string studentNumber;
	int credits;
};

int main() {

	Student student1; 

	// input operation for student1 data
	cout << "Enter the first name for student1: ";
	cin >> student1.firstName;
	cout << "Enter the last name of student1: ";
	cin >> student1.lastName;
	cout << "Enter student1's student number: ";
	cin >> student1.studentNumber;
	cout << "Enter the number of credits completed by student1: ";
	cin >> student1.credits;
	

	// Displaying student1 data
	cout << "\nFirst name: " << student1.firstName << "\n"
		<< "Last name: " << student1.lastName << "\n"
		<< "Student number: " << student1.studentNumber << "\n"
		<< "Credits: " << student1.credits << " op\n";

	return EXIT_SUCCESS;
}
