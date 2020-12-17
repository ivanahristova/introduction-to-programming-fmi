#include <iostream>
#include <string>
using namespace std;

bool isPalindrom(char* str)
{
	int size = strlen(str);
	int limit = size / 2;
	for (int i = 0; i < limit; i++)
	{
		if (str[i] != str[size - i - 1])
			return false;
	}
	return true;
}

bool isPalindromRev(char* str)
{
    char reverse[101];
	int size = strlen(str);
	for (int i = 0; i < size; i++)
		reverse[i] = str[size - i - 1];
	
	reverse[size] = '\0';
	return !strcmp(reverse, str);
}

int main()
{
	char str[101];
	cin >> str;

	cout << isPalindrom(str) << endl;
	cout << isPalindromRev(str);
}