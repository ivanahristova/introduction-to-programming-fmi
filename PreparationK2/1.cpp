#include <iostream>
using namespace std;

void swap(int* arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void insertionSort(int* arr, int len)
{
	for (int i = 1; i < len; i++)
	{
		int element = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > element)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = element;
	}
}

bool permutation(int* arr1, int* arr2, int k)
{
	for (int i = 0; i < k; i++)
	{
		if (arr1[i] != arr2[i])
			return false;
	}

	return true;
}

bool permutationRecursive(int* arr1, int* arr2, int k)
{
	if (k < 0)
		return true;

	return arr1[k] == arr2[k] && permutationRecursive(arr1, arr2, k - 1);
}

int main()
{
	const int k = 6;
	int arr1[] = { 1,2,3,7,5,4 };
	int arr2[] = { 1,0,2,7,5,4 };

	/*int* arr1 = new int[k];
	for (int i = 0; i < k; i++)
		cin >> arr1[i];
	
	int* arr2 = new int[k];
	for (int i = 0; i < k; i++)
		cin >> arr2[i];*/
	
	insertionSort(arr1, k);
	insertionSort(arr2, k);

	cout << permutation(arr1, arr2, k);
	cout << permutationRecursive(arr1, arr2, k);
}