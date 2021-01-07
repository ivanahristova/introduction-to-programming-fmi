#include <iostream>
using namespace std;

// n! = n * (n - 1) * (n - 2) * ... * 1
int factorial(int n)
{
	if (n == 1)
		return 1;
	return n * factorial(n - 1);
}

int arraySum(int* arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];

	return sum;
}

void swap(int** matrix, int i, int j)
{
	int* temp = matrix[i];
	matrix[i] = matrix[j];
	matrix[j] = temp;
}

void SelectionSort(int** matrix, int size)
{
	int upperBound = size - 1;
	for (int i = 0; i < upperBound; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < size; j++)
		{
            // if (arraySum(matrix[j], matrix[j][0]) < arraySum(matrix[minIndex], matrix[minIndex][0])) -> тук по много пъти смятаме една и съща сума
			if (matrix[j][matrix[j][0] - 1] < matrix[minIndex][matrix[minIndex][0] - 1]))
				minIndex = j;
		}
		if (minIndex != i)
			swap(matrix, i, minIndex);
	}
}

int main()
{
	int n;
	cin >> n;

	int** matrix = new int* [n];
		
	for (int i = 0; i < n; i++)
	{
		int size;
		cin >> size;
		size += 2; // за размер и сума
		matrix[i] = new int[size];
		matrix[i][0] = size;
		for (int j = 1; j < size - 1; j++)
            	cin >> matrix[i][j];
        
        matrix[i][size - 1] = arraySum(++matrix, size - 1);
	}

	SelectionSort(matrix, n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < matrix[i][0]; j++)
			cout << matrix[i][j] << ' ';
		cout << endl;
	}

	for (int i = 0; i < n; i++)
		delete[] matrix[i];

	delete[] matrix;
}