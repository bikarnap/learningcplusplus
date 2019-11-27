/*
***Darts score program***
Program asks five dart scores and stores them in an array. 
Then it prints out all the scores
Finally, it also prints the best score, i.e., the maximum score
*/

#include <iostream>
using namespace std;

int main() {
	int dartScores[5], bestScore = 0;
	for (int i = 0; i < 5; i++) {
		cout << "Enter dart score #" << (i + 1) << ": ";
		cin >> dartScores[i];
		dartScores[i] > bestScore
			? bestScore = dartScores[i]
			: bestScore = bestScore;
	}
	cout << "All scores: ";
	for (int score : dartScores)
		cout << score << " ";
	cout << endl;
	cout << "The best score is: " << bestScore;

	return EXIT_SUCCESS;
}
