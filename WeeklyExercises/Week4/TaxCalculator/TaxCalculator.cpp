// Tax calculator: The tax is calculated on the basis of following table
/*
	Income (euros)			Tax (%)
========================================
	16900 - 25300			6.25
	25300 - 41200			17.5
	41200 - 73100			21.5
	73100 -					31.5
========================================
*/

#include <iostream>
#include <iomanip>
using namespace std; 

int main() {
	int incomeYearly; 
	double communityTaxAmount, govTax, govTaxAmount;
	double totalTax; 

	cout << "Enter your yearly income (in euros): ";
	cin >> incomeYearly; 
	cout << "\n"; 
	if (incomeYearly >= 16900) {
		if (incomeYearly >= 16900 && incomeYearly < 25300) {
			govTax = 6.25; 
			govTaxAmount = (govTax * incomeYearly) / 100;
		}
		else if (incomeYearly >= 25300 && incomeYearly < 41200) {
			govTax = 17.5; 
			govTaxAmount = (govTax * incomeYearly) / 100;
		}
		else if (incomeYearly >= 41200 && incomeYearly < 73100) {
			govTax = 21.5; 
			govTaxAmount = (govTax * incomeYearly) / 100;
		}
		else {
			govTax = 31.5; 
			govTaxAmount = (govTax * incomeYearly) / 100;
		}
		communityTaxAmount = (19.75 * incomeYearly) / 100;
		totalTax = communityTaxAmount + govTaxAmount;

		cout << setw(26) << "Community Tax: " << setw(10) << communityTaxAmount << " euros\n";
		cout << setw(26) << "Governmental Income Tax: " << setw(10) << govTaxAmount << " euros" << "     Income tax percentage: " << govTax << "\n";
		cout << setw(26) << "Your total yearly tax is: " << setw(10) << totalTax << " euros\n";
	}
	else {
		cout << "Your income tax percentage should be less than 6.25%.\n"; 
	}


	return 0; 
}