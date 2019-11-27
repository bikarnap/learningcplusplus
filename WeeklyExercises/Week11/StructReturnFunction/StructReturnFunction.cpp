#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
	string firstName;
	string lastName;
	string studentNumber;
	int credits;
}student;

Student createStudent();

int main() {


	/*const int SIZE_OF_STUDENTS = 2;
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
	for (Student student : students) {
		cout << student.firstName << " " << student.lastName
			<< setw(20) << student.studentNumber
			<< setw(20) << student.credits << "\n";
	}

	*/
	Student student1 = createStudent();
	cout << student.credits;
	cout << "\n";
	Student student2 = createStudent();
	cout << student2.firstName;
	return EXIT_SUCCESS;

}

Student createStudent() {
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
