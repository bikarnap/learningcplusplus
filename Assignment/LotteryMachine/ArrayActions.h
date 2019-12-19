#ifndef ARRAYACTIONS_H
#define ARRAYACTIONS_H

struct Results {
	int* numbers;
	int number;
};

int* GenerateArray(int, int, int);
int* CombineArray(int*, int*, int, int);
Results CompareArray(int*, int*, int, int);
void YouWin(Results, Results);

#endif // !ARRAYACTIONS_H
#pragma once
