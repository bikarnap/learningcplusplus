#include <iostream>
using namespace std;

int main() {
	struct State {
		string name;
		int population;
		int area;
		string leader;
	}state1, state2;

	cout << "Enter the name of the state1: ";
	cin >> state1.name; 
	cout << "Enter the poplulation of state1: "; 
	cin >> state1.population; 
	cout << "Enter the area of state1: "; 
	cin >> state1.area; 
	cout << "Enter the leader of state1: "; 
	cin >> state1.leader;

	cout << "Information about state1\n"
		<< "State: " << state1.name << "\n"
		<< "Population: " << state1.population << "\n"
		<< "Area: " << state1.area << "\n"
		<< "Leader: " << state1.leader << "\n\n";

	cout << "Enter the name of the state2: ";
	cin >> state2.name;
	cout << "Enter the poplulation of state2: ";
	cin >> state2.population;
	cout << "Enter the area of state1: ";
	cin >> state2.area;
	cout << "Enter the leader of state1: ";
	cin >> state2.leader;

	cout << "Information about state2\n"
		<< "State: " << state2.name << "\n"
		<< "Population: " << state2.population << "\n"
		<< "Area: " << state2.area << "\n"
		<< "Leader: " << state2.leader << "\n\n";

	return EXIT_SUCCESS; 

}
