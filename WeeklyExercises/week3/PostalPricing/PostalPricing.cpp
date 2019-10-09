// Domestic postal pricing calculator
// The following table is used to calculate the postal pricing
/*
	Weight(g)	Price(euros)
 =============================
	 50			 0.60
	 100		 0.90
	 250		 1.30
	 500		 2.10
	 1000		 3.50
	 2000		 5.50
 ==============================

*/

#include <iostream>
using namespace std; 

int main() {
	double weigthOfLetter, priceOfPostage = 0.00;
	cout << "Please enter the weight of the letter: "; 
	cin >> weigthOfLetter; 
	if (weigthOfLetter <= 2000) {
		if (weigthOfLetter <= 50.00) {
			priceOfPostage = 0.60;
			//cout << "Price for posting your letter is 0.60 euros.\n"; 
		}
		else if (weigthOfLetter > 50.00 && weigthOfLetter <= 100.00) {
			priceOfPostage = 0.90;
			//cout << "Price for posting your letter is 0.90 euros.\n"; 
		}
		else if (weigthOfLetter > 100.00 && weigthOfLetter <= 250.00) {
			priceOfPostage = 1.30;
			//cout << "Price for posting your letter is 1.30 euros.\n"; 
		}
		else if (weigthOfLetter > 250.00 && weigthOfLetter <= 500.00) {
			priceOfPostage = 2.10;
			//cout << "Price for posting your letter is 2.10 euros.\n";
		}
		else if (weigthOfLetter > 500.00 && weigthOfLetter <= 1000.00) {
			priceOfPostage = 3.50;
			//cout << "Price for posting your letter is 3.50 euros.\n"; 
		}
		else if (weigthOfLetter > 1000.00 && weigthOfLetter <= 2000.00) {
			priceOfPostage = 5.50;
			//cout << "Price for posting your letter is 5.50 euros.\n"; 
		}

		cout << "The price of posting your letter is " << priceOfPostage << "0 euros.\n";

	}
	
	else {
		cout << "Contact a staff!\n";
	}
	
	return 0; 

}