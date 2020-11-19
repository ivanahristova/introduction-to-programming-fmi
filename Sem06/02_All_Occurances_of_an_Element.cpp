#include <iostream>
using namespace std;

int main()
{
    // 1st
    const int size = 8;
	int numbers[size] = { 2, 3, 4, 2, 8, 19, 36, 2 }; // 2 -> 0, 3, 7
	int indices[size];
	int counter = 0;

	int element;
	cin >> element;

	for (int i = 0; i < size; i++)
	{
		if (numbers[i] == element)
			indices[counter++] = i;
	}

	for (int i = 0; i < counter; i++)
		cout << indices[i] << ' ';

    // 2nd - demonstrating what a histogram is
    const int SIZE = 8;
	int nums[SIZE] = { 2, 3, 4, 2, 8, 19, 36, 2 };
	bool histogram[SIZE] = {};

	int element;
	cin >> element;

	for (int i = 0; i < SIZE; i++)
	{
		if (nums[i] == element)
			histogram[i] = 1;
	}

	for (int i = 0; i < SIZE; i++)
	{
		if (histogram[i])
			cout << i << ' ';
	}

    return 0;
}