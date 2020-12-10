#include <iostream>
using namespace std;

void swap(int* arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

// B.C. : O(n-1) = O(n)
// A.C. : O(n^2)
// W.C. : (n - 1) + (n - 2) + ... + (1) = ((n-1)*n)/2 = (n^2 - n)/2 = O(n^2)
// Memory : O(1)
// Stable : Yes
// When : Studying

void BubbleSort(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		bool isSwapped = false;

		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr, j, j + 1);
				isSwapped = true;
			}
		}

		if (!isSwapped)
			return;

	}
}

int main()
{
    const int size = 8;
    int best[size] = { 1,2,3,4,5,6,7,8 };
	int average[size] = { 1,2,3,4,9,2,4,5 };
    int worst[size] = { 9,8,7,6,5,4,3,2 };

	BubbleSort(best, size);
	for (int i = 0; i < size; i++)
	{
		cout << best[i] << ' ';
	}
    cout << endl;

    BubbleSort(average, size);  
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