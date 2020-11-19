#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
	int arr[SIZE];
	
	for (int i = 0; i < SIZE; i++)
		cin >> arr[i];
	
	int element;
	cin >> element;
	bool isFound = false;
	int index = -1;

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == element)
		{
			isFound = true;
			index = i;
			break;
		}
	}

	cout << isFound << endl;
	if (isFound)
		cout << index << endl;

    return 0;
}