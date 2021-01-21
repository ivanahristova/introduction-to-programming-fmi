#include <iostream>
using namespace std;

int min(int a, int b)
{
	return (a > b) ? b : a;
}

int min(int a, int b, int c)
{
	return min(a, min(b, c));
}

int max(int a, int b)
{
	return (a > b) ? a : b;
}

int max(int a, int b, int c, int d)
{
	return max(max(a, b), max(c, d));
}

int f6(int n)
{
	int sum = 0;
	int counter = 2;

	for (int i = 1; i <= n; i++, counter++)
	{
		int curr_product = 1;
		for (int j = 0; j < counter; j++)
			curr_product *= (i + j);
		
		sum += curr_product;
	}
	return sum;
}

void f6_rec(int n, int beg, int end, int& sum)
{
	if (end > n + n)
		return;

	int curr = 1;
	for (int i = beg; i <= end; i++)
		curr *= i;

	sum += curr;
	f6(n, beg + 1, end + 2, sum);
}

bool f7(int arr[], int size)
{
	for (int i = 2; i < size; ++i)
		if (!((arr[i - 2] >= arr[i - 1] && arr[i - 1] <= arr[i]) || (arr[i - 2] <= arr[i - 1] && arr[i - 1] >= arr[i])))
			return false;

	return true;
}


int main()
{
    int a = 2, b = 3, c = 4, d = 5;

    // Задача 5 -------------------------------------------
	int maxS = max(min(a, b, c), min(a, b, d), min(a, c, d), min(b, c, d));

	// Задача 6 -------------------------------------------
	cout << f6(5);

	int sum = 0;
	f6_rec(5, 1, 2, sum);
	cout << sum;

	// Задача 7 -------------------------------------------
	const int SIZE = 16;
	int arr[SIZE] = {1, 4, 2, 19, 6, 7, 5, 22, 10, 30, 2, 34, 12, 15, 11, 16};
	cout << f7(arr, SIZE);

}
