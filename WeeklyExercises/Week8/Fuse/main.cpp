#include <iostream>
#include "Header.h"
using namespace std;

int main() {
	int powerConsumption; 
	cout << "Enter the power consumption: "; 
	cin >> powerConsumption; 
	fuse(powerConsumption);
	return EXIT_SUCCESS;
}