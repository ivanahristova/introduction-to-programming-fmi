#include <iostream>
using namespace std;

void swap(int* arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

// B.C. : O(n^2)
// A.C. : O(n^2)
// W.C. : O(n^2)
// Stable: No
// Memory : O(1)
// Best : Min swaps

void SelectionSort(int* arr, int size)
{
	int upperBound = size - 1;
	for (int i = 0; i < upperBound; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[minIndex])
				minIndex = j;
		}
		if (minIndex != i)
			swap(arr, i, minIndex);
	}
}

int main()
{
    const int size = 8;
    int best[size] = { 1,2,3,4,5,6,7,8 };
	int average[size] = { 1,2,3,4,9,2,4,5 };
    int worst[size] = { 9,8,7,6,5,4,3,2 };

	SelectionSort(best, size);
	for (int i = 0; i < size; i++)
	{
		cout << best[i] << ' ';
	}
    cout << endl;

    SelectionSort(average, size);  
    for (int i = 0; i < size; i++)
	{
		cout << average[i] << ' ';
	}
    cout << endl;

    BubbleSort(worst, size);
    for (int i = 0; i < size; i++)
	{
		cout << worst[i] << ' ';
	}
}