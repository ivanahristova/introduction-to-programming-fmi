#include <iostream>
using namespace std;

void swap(int* arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

// B.C. : O(n)
// A.C. : O(n^2)
// W.C. : O(n^2)
// Stable : Yes
// Memory : O(1)
// When to use : quite ordered arrays

void InsertionSort(int* arr, int size)
{
	for (int i = 1; i < size; i++)
	{
		int element = arr[i];
		int index = i - 1;

		while (index >= 0 && arr[index] > element)
		{
			arr[index + 1] = arr[index];
			index--;
		}

		arr[index + 1] = element;
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