#include <iostream>
#include <string>
using namespace std;

int main()
{
	char str[101], word[11], x;
	cin >> str >> word >> x;

	char result[1001]; // 100 * 10 + 1
	int len1 = strlen(str);
	int len2 = strlen(word);

	int cursor = 0;
	for (int i = 0; i < len1; i++)
	{
		if (str[i] == x)
		{
			for (int j = 0; j < len2; j++, cursor++)
				result[cursor] = word[j];
		}
		else
			result[cursor++] = str[i];
	}
	result[cursor] = '\0';

	cout << result;
}