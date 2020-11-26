#include <iostream>
using namespace std;

int loseNeighbours(int arr[], int size)
{
	bool removed = true;
	while (removed)
	{
		removed = false;
		for (int i = 1; i < size - 1; i++)
		{
			if (arr[i - 1] > arr[i] && arr[i] < arr[i + 1])
			{
				for (int j = i; j < size - 1; j++)
				{
					arr[j] = arr[j + 1];
				}
				size--;
				removed = true;
			}
		}
	}

	return size;
}

int main()
{
	const int SIZE = 1024;
	int arr[SIZE];

	int elementsCount = 0;
	cin >> elementsCount;

    // Елементите на масива се въвеждат от потребителя
	for (int i = 0; i < elementsCount; i++)
		cin >> arr[i];
	
	int newSize = loseNeighbours(arr, elementsCount);
	
    // Принтира елементите на получения масив
    for (int i = 0; i < newSize; i++)
		cout << arr[i] << ' ';

}