#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
	string firstName;
	string lastName;
	string studentNumber;
	int credits;
};

int main() {
	const int SIZE_OF_STUDENTS = 5; 
	Student students[SIZE_OF_STUDENTS];

	for (int i = 0; i < SIZE_OF_STUDENTS; i++) {
		cout << "Enter the firstname of student #" << (i + 1) << ": ";
		cin >> students[i].firstName;
		cout << "Enter the lastname of student #" << (i + 1) << ": ";
		cin >> students[i].lastName;
		cout << "Enter the student number of student #" << (i + 1) << ": ";
		cin >> students[i].studentNumber;
		cout << "Enter the credits earned by student #" << (i + 1) << ": ";
		cin >> students[i].credits;
		cout << "\n";
	}
	
	
	cout << setw(24) << left << "Student Name" 
		<< setw(15) << left << "Student Number" 
		<< setw(15) << right << "Credits" << "\n";
	cout << "=========================================================\n";

	for (Student student : students)
		cout << setw(12) << left << student.firstName <<setw(12) << left << student.lastName
		     << "   "<< setw(12) << left << student.studentNumber 
			 << setw(12) << right << student.credits
		     << "\n";


	return EXIT_SUCCESS;

}
