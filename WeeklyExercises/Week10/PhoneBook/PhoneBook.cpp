/*
***Simple Phonebook***
Program has functionality to add contact (name and number), find/search contact, and exit
*/
#include <iostream>
using namespace std;

int main() {
	const int MAX_COUNT = 20;
	string names[MAX_COUNT];
	string numbers[MAX_COUNT];
	string findContact;
	int id = 0;

	int selection = 0;
	while (selection != 3) {
		cout << "Phonebook Menu\n"
			<< "1 - add a contact\n"
			<< "2 - find contact\n"
			<< "3 - exit menu\n"
			<< "Select from menu above \n";
		cin >> selection;

		switch (selection) {
			case 1:
				cout << "You have selected to add contact\n";
				if (id < MAX_COUNT) {
					cout << "Name: ";
					cin >> names[id];
					cout << "Number: ";
					cin >> numbers[id];
					id++;
				}
				else {
					cout << "**Memory full***\n";
						 //<< "System exiting...";
					//exit(0);
				}
				break;

			case 2:
				cout << "You have selected to find contact\n"
					<< "Find contact: ";
				cin >> findContact;
				for (int i = 0; i <= id; i++) {
					if (names[i] == findContact) {
						cout <<"***" << names[i] << " --> " << numbers[i] << "\n";
						break;
					}
					else if (i >= id) {
						cout << "***Contact not found!***\n";
					}
					else {
						continue;
					}

				}
				break;
			case 3:
				cout << "Exit menu selected, system exiting...";
				exit(0);
				break;
		}

	}

	return EXIT_SUCCESS;
}
