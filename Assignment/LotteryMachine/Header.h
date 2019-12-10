#ifndef HEADER_H
#define HEADER_H
int* GenerateArray(int, int, int);
int* CombineArray(int*, int*, int, int);
void DisplayWelcome();
void DisplayMenu();
void SelectOption(int, int, int, int);
int* SelectNumbers(int, int, int);
void DisplayRawNumbers(int*, int);
void DisplayResult(int*, int, int, int);
int* CompareArray(int*, int*, int);
void Start(int, int, int, int);
void OpenLottery(int lotterySize, int bonusSize, int min, int max);
void printLine();
void DisplaySortedNumbers(int* myArray, int size);
#endif // !HEADER_H

