#include <iostream>
#include <iomanip>
using namespace std;
struct Student {
	string firstName;
	string lastName;
	string studentNumber;
	int credits=0;
};

void printStudentInformation(Student);

int main() {
	const int SIZE_OF_STUDENTS = 2;
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
	}
	cout << "\n";
	cout << "Student Name   "
		<< setw(20) << "Student number"
		<< setw(20) << "Student credits\n";
	cout << "******************************************************\n";
	/*for (Student student : students) {
		cout << student.firstName << " " << student.lastName
			<< setw(20) << student.studentNumber
			<< setw(20) << student.credits << "\n";
	}*/
	printStudentInformation(students[1]);

	return EXIT_SUCCESS;

}

void printStudentInformation(Student student) {

	cout << student.firstName << " " << student.lastName
		 << setw(20) << student.studentNumber
		 << setw(20) << student.credits << "\n";
	
}
