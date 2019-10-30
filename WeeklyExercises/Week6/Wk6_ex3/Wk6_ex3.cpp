// Working with strings

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
	if(name1.compare(name2) == -1) cout <<"Alphabetically " <<name1 << " comes first";
	else cout << "Alphabetically " << name2 << " comes first";
	cout << "\n";

	if (name1Count > name2Count) {
		cout << name1 << " has more characters (characters = " << name1Count << ") than " << name2 
			 << " (characters = " << name2Count <<").";
	}
	else if (name2Count < name1Count) {
		cout << name2 << " has more characters (characters = " << name2Count << " ) than " << name1
			<< " (characters = " << name1Count << ").";;

	} else 
		cout << name1 <<" (characters = " <<name1Count << ") has same number of characters as " << name2 <<" (characters = "
				<<name2Count <<")." ;


	cout << "\n";


	return EXIT_SUCCESS;
}
