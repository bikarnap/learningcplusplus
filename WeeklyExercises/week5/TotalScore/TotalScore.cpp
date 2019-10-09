// While loop
// The program asks the length of the jump from the user and the points from 5 judges
// Then it sums the total points and calculates the total score
// Total score = total points + length of jump * 0.9

#include <iostream>
using namespace std; 

int main() {
	double jumpLength = 0.0, points = 0.0, totalPoints=0.0, totalScore=0.0;
	int judegeNumber = 5;
	int judgeCount = 1;
	cout << "Length of the jump: ";
	cin >> jumpLength;
	while (judgeCount <= judegeNumber) {
		cout << "Points judge " << judgeCount << ": "; 
		cin >> points; 
		totalPoints += points;
		judgeCount++; 
	}
	totalScore = totalPoints + jumpLength * 0.9;
	cout << "Total score is: " << totalScore << "\n";

	return 0; 

}