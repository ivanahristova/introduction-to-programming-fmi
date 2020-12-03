#include <iostream>
#include <ctime>
using namespace std;

const int SIZE = 10000;
int A[SIZE][SIZE] = {};

int main()
{
    clock_t Col = clock();

	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			A[j][i]++;

	double col = ((double)clock() - Col) / CLOCKS_PER_SEC;

	clock_t Row = clock();

	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			A[i][j]++;

	double row = ((double)clock() - Row) / CLOCKS_PER_SEC;

	cout << "Row: " << row << endl;
	cout << "Col: " << col << endl;

}