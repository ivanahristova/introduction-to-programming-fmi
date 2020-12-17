#include <iostream>
using namespace std;

int numbersCount(char* str)
{
	bool prevDigit = false;
	int numbersCount = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if (!prevDigit)
			{
				numbersCount++;
				prevDigit = true;
			}
		}
		else
			prevDigit = false;
	}

	return numbersCount;
}

int main()
{
	char str[101];
	cin >> str;

	cout << numbersCount(str);
}