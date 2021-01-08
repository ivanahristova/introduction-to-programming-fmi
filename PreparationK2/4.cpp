#include <iostream>
using namespace std;

void insertionSortRec(int* arr, int size)
{
	if (size == 1)
		return;

	insertionSortRec(arr, size - 1);

	int current = arr[size - 1];
	int index = size - 2;

	while (index >= 0 && arr[index] > current)
	{
		arr[index + 1] = arr[index];
		index--;
	}
	arr[index + 1] = current;
}

int main()
{
	int arr[] = { 6, 4, 3 ,1, 7 };
	insertionSortRec(arr, 5);
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ' ';
}