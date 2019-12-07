#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
	string firstName;
	string lastName;
	string studentNumber;
	int credits;
}student;

Student CreateStudent();

int main() {
	Student student1 = CreateStudent();
	/*
	// Display the information from created student
	cout << "\nSummary about the student\n";
	cout << "Name: " << student1.firstName << " " << student.lastName
		<< "\nStudent Number: " << student.studentNumber
		<< "\nCredits: " << student.credits << " op\n";
	return EXIT_SUCCESS;*/

}

Student CreateStudent() {
	cout << "Enter the first name of the student: "; 
	cin >> student.firstName; 
	cout << "Enter the last name of the student: "; 
	cin >> student.lastName; 
	cout << "Enter the student number of the student: "; 
	cin >> student.studentNumber; 
	cout << "Enter the student's credits: "; 
	cin >> student.credits; 

	return student;
}
