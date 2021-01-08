#include <iostream>
using namespace std;

void swap(int* arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void bubbleSortRec(int* arr, int size)
{
	if (size == 1)
		return;

	for (int i = 0; i < size - 1; i++)
		if (arr[i] > arr[i + 1])
			swap(arr, i, i + 1);

	bubbleSortRec(arr, size - 1);
}

int main()
{
	int arr[] = { 6, 4, 3 ,1, 7 };
	bubbleSortRec(arr, 5);
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ' ';
}