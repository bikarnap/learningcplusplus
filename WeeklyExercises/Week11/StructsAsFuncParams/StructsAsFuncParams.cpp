/*Program with struct as function parameter
* function prototype: void printStudentInformation(Student)
*/
#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
	string firstName;
	string lastName;
	string studentNumber;
	int credits=0;
};

void printStudentInformation(Student); // function prototype with struct as parameter

int main() {
	const int SIZE_OF_STUDENTS = 5;
	Student students[SIZE_OF_STUDENTS];

	// Enter the infromation about students
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

	// Displaying all the students from the student array information using function call
	cout << setw(24) << left <<"Student Name"
		<< setw(18) << left << "Student Number"
		<< setw(11) << right << "Credits" << "\n";
	cout << "=======================================================\n";
	for(Student s : students)
		printStudentInformation(s);

	return EXIT_SUCCESS;

}

// function definition
void printStudentInformation(Student student) {
	cout << setw(12) << left << student.firstName << setw(12) << left << student.lastName
		<< "   " << setw(12) << left << student.studentNumber
		<< setw(12) << right << student.credits
		<< "\n";	
}
