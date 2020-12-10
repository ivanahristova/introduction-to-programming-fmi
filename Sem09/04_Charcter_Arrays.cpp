#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[21]; // '\0'
	char name0[10] = { 'I', 'v', 'a', 'n', 'a', '\0'};
	char name1[] = "Ivana";
	char st[30];
	cin >> st;
	cout << st << endl;

    // We don't need the size, because once we reach '\0' we know it stands for the end of the character array.
	//for (int i = 0; arr[i] != '\0'; i++)
	//{
	//	
	//}

    // Problem 1: Replace every occurance if character x with character y.
	char input[] = "asdadad";
	char toReplace = 'a';
	char replaceWith = 'x';

	for (int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] == toReplace)
			input[i] = replaceWith;
	}

	cout << input << endl;

    // Problem 2: Count the digits in a character array.
	char str[] = "123hsds12";
	int count = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			count++;
	}

	cout << count;

    
}