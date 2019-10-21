//

#include <iostream>
using namespace std; 

int main() {
	// Part b
	string firstName, lastName, streetName, postalCode, city; 

	cout << "First name: "; 
	cin >> firstName; 
	cout << "Last name: "; 
	cin >> lastName; 
	cout << "Street name: "; 
	cin >> streetName; 
	cout << "Postal code: "; 
	cin >> postalCode; 
	cout << "City: "; 
	cin >> city; 

	cout << "Your address is " << firstName << " " << lastName << " " << streetName << " street "
		<< postalCode << " " << city << "\n";

	// Part b
	string name1, name2; 
	int name1Count, name2Count; 

	cout << "Enter two names: ";
	cin >> name1 >> name2;
	name1Count = name1.size();
	name2Count = name2.size();
	if(name1.compare(name2) == -1) cout <<"Alphabetically " <<name1 << " comes first\n";
	else cout << "Alphabetically " << name2 << " comes first\n";

	// Test using ternary operator
	name1Count > name2Count
		? cout << name1 << " has more characters than " << name2
		: cout << name2 << " has more characters than " << name1;

	cout << "\n";

	return EXIT_SUCCESS;

}