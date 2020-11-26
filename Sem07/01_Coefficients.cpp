#include <iostream>
using namespace std;

void inputArray(int arr[], int size)
{
	for (int i = size; i >= 0; --i)
		cin >> arr[i];	
}

void multiplyPolinoms(int res[], int size, int arr1[], int size1, int arr2[], int size2)
{
	for (int i = 0; i <= size1; i++)
		for (int j = 0; j <= size2; j++)
			res[i + j] += arr1[i] * arr2[j];
}

void printArray(int res[], int size)
{
	for (int i = 0; i <= size; i++)
		cout << res[size - i] << ' ';	
}

int main()
{
	const int SIZE = 1024;
	int n, m;
	int P[SIZE], Q[SIZE], RESULT[SIZE*2] = {};

	cin >> n;
	inputArray(P, n);

	cin >> m;
	inputArray(Q, m);

	multiplyPolinoms(RESULT, n + m, P, n, Q, m);
	printArray(RESULT, n + m);
}