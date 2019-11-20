// Functions - Function by value and function by reference

#include <iostream>
using namespace std; 

void setAge(string, int &);

int main() {
	int age = 34;
	cout << "Age before: " << age; // age = 34
	cout << endl;

	setAge("Bikarna", age); // passing age to setAge function

	cout << "Age after: " << age; // age = age passed to function setAge
	cout << endl; 

}

void setAge(string name, int &age) {
	cout << "Enter your name: "; 
	cin >> name; 
	cout << "Enter your age: ";
	cin >> age;
	cout << "Hello, " << name << ". You are " << age << " years old.";
	cout << endl; 
	
}