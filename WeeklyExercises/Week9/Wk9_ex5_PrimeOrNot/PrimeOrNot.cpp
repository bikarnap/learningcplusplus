
#include <iostream>
using namespace std; 

bool testPrime(int);

int main() {
	int count = 0;
	cout << "The prime numbers between 0 and 1000 are \n";
	for (int i = 1; i < 1000; i++) {
		if (testPrime(i)) {
			cout << i << " ";
			count += 1;
		}
	}
	cout << endl;
	cout << "Total number of primes: " << count; 

	return EXIT_SUCCESS;
	
}

bool testPrime(int number) {
	bool isPrime = true;
	if (number == 1)
		isPrime = false;
	else if (number == 2)
		isPrime = true;
	else {
		for (int i = 2; i < number; i++) {
			if (number % i == 0) {
				isPrime = false;
				break;
			}
			else
				isPrime = true;
		}
	}

	return isPrime;
}