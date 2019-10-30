//

#include <iostream>
using namespace std; 

int main() {
	const int MIN_PLAYERS = 3;
	const int MAX_PLAYERS = 8;
	int playersPerTeam; 
	int players;
	cout << "How many players do you wish per team? "; 
	cin >> playersPerTeam; 

	// Validating
	while (playersPerTeam < MIN_PLAYERS || playersPerTeam > MAX_PLAYERS) {
		
		// Error 
		cout << "You should have at least " << MIN_PLAYERS
			<< " but no more than " << MAX_PLAYERS << " per team.\n";

		cout << "How many players do you wish per team? "; 
		cin >> playersPerTeam; 

	}

	// Number of players available
	cout << "How many players are available? "; 
	cin >> players; 

	// Validate the input
	while (players <= 0) {
		// Get the input again
		cout << "Please enter 0 or greater: "; 
		cin >> players; 
	}

}