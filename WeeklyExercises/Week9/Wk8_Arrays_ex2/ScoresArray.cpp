
#include <iostream>
using namespace std; 

int main() {
	int examScores[10]; 
	int totalScores = 0; 
	double averageScore; 
	int sizeOfScore = sizeof(examScores) / sizeof(int);
	
	for (int i = 0; i < sizeOfScore; i++) {
		int score; 
		cout << "Enter the score for exam #" << (i + 1) <<": "; 
		cin >> score; 
		examScores[i] = score; 
		totalScores += examScores[i];
	}
	averageScore = static_cast<double>(totalScores) / sizeOfScore;

	cout << "The exam scores are (starting from exam 1 to exam 2) are:\n";
	for (int score : examScores)
		cout << score << " ";
	cout << endl; 
	cout << "The total of all the scores is: " << totalScores; 
	cout << endl; 
	cout << "The average score is: " << averageScore; 	

	return EXIT_SUCCESS; 
}