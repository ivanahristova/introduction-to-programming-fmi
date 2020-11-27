#include <iostream>
using namespace std;


void inputArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cin >> arr[i];
}

void removeElementAtIndex(int arr[], int size, int index)
{
	if (index == size)
		return;

	for (int i = index + 1; i < size; i++)
		arr[i - 1] = arr[i];
}

void insertElementAfterIndex(int arr[], int size, int element, int index)
{
	for (int i = size; i > index; i--)
		arr[i] = arr[i - 1];

	arr[index + 1] = element;
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

bool isSaw(int arr[], int size)
{
	bool isSaw = true;

	for (int i = size - 1; i > 0; i--)
	{
		if (!((arr[i + 1] >= arr[i] && arr[i] <= arr[i - 1]) || (arr[i + 1] <= arr[i] && arr[i] >= arr[i - 1])))
			return false;
	}
	return true;
}

int main() 
{
const int size = 6;
	int arr[size] = {1, 2, 0, 4, 3, 6};

	// making a copy of an array
	int copy[size];
	for (int i = 0; i < size; i++)
		copy[i] = arr[i];
	
	cout << "This is a copy of our array: ";
	printArray(copy, size);

	cout << "Please enter the index of the element you would like to remove: ";
	int i;
	cin >> i;
	if (i < 0 || i > 5)
	{
		cout << "Invalid index. Romving last element..." << endl;
		i = 5;
	}

	cout << "The element to be removed is: " << arr[i] << endl;
	removeElementAtIndex(arr, size, i);

	cout << "The array after we have removed the element looks like this: ";
	printArray(arr, size - 1);

	cout << "Please enter a number you would like to insert into the array: ";
	int X;
	cin >> X;

	cout << "Please enter the index of the element after which you would like to insert your element: ";
	int j;
	cin >> j;
	if (j < 0 || j > 4)
	{
		cout << "Invalid index. Inserting element at the last position..." << endl;
		j = 4;
	}

	cout << "The array after we have inserted the element looks like this: ";
	insertElementAfterIndex(arr, size - 1, X, j);
	printArray(arr, size);

	if (isSaw(arr, size))
		cout << "The array is \"saw\"" << endl;
	else
		cout << "The array is not \"saw\"" << endl;
}