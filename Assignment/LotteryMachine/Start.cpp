#include <iostream>
#include <algorithm>
#include "Header.h"
using namespace std;

void Start(int max, int min, int lotterySize, int bonusSize) {
	int action = 999;
	while (action != 0) {
		cout << "Select option\n";
		SelectOption(lotterySize, bonusSize, min, max);
	}
}