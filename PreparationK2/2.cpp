#include <iostream>
#include <cstring>
using namespace std;

bool helper(char** arr, int i, int j, char* str, bool isRow)
{
	int strIndex = 1;
	while (str[strIndex] != '\0' && str[strIndex] == arr[i][j])
	{
		strIndex++;
		if (isRow)
			j++;
		else
			i++;
	}
	return strIndex == strlen(str);
}

bool contains(char** arr, int size, char* str)
{
	int lastElement = size - strlen(str);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j <= lastElement; j++)
		{
			if (arr[i][j] == str[0])
			{
				if (helper(arr, i, j + 1, str, 1))
					return true;
			}
		}

		for (int j = 0; j <= lastElement; j++)
		{
			if (arr[j][i] == str[0])
			{
				if (helper(arr, j + 1, i, str, 0))
					return true;
			}
		}
	}

	return false;
}

int main()
{
	char** arr = new char*[5];

	for (int i = 0; i < 5; i++)
	{
		arr[i] = new char[5];
		for (int j = 0; j < 5; j++)
			cin >> arr[i][j];
	}

	cin.ignore();
	char* str = new char[6];
	cin.getline(str, 5);

	cout << contains(arr, 5, str);
	delete[] str;

	for (int i = 0; i < 5; i++)
		delete[] arr[i];
	
	delete[] arr;
}
