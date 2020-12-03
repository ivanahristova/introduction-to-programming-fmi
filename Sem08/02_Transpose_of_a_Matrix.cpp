#include <iostream>
using namespace std;

int main()
{
	const int ROWS = 5;
	const int COLS = 6;
	int matrix[ROWS][COLS] = {};

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (i == j)
				continue;

			matrix[i][j] = i * j + j;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << matrix[i][j] << ' ';
		
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << (matrix[i][j] += 100) << ' ';
		
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
			cout << matrix[j][i] << ' ';

		cout << endl;
	}
}