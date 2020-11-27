#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 100;
	int arr1[SIZE], arr2[SIZE];

	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr1[i];

	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> arr2[i];

	int index = -1;
	int traversedIndex = m - 1;
	for (int i = n - 1; i >= 0; i--)
	{
		bool hasOccured = false;
		while (traversedIndex >= 0)
		{
			if (arr2[traversedIndex] > arr1[i])
			{
				traversedIndex--;
				continue;
			}

			if (arr2[traversedIndex] == arr1[i])
			{
				hasOccured = true;
				traversedIndex--;
				break;
			}

			if (arr2[traversedIndex] < arr1[i])
			{
				index = i;
				break;
			}
		}

		if (hasOccured)
			continue;
		index = i;
	}

	if (index == -1)
		cout << "There is no such element" << endl;
	
	else
		cout << index;
}