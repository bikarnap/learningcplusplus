// Functions - Function by value and function by reference

#include <iostream>
using namespace std; 

void setAge(string, int &);

int main() {
	int age = 34;
	cout << "Age before: " << age;
	cout << endl;

	setAge("Bikarna", age);

	cout << "Age after: " << age;
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