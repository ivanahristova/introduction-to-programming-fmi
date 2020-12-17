#include <iostream>
using namespace std;

bool validate(char* str)
{
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] < 'a' || str[i] > 'z')
			return false;
	
	return true;
}

void capitalize(char* str)
{
	int diff = 'A' - 'a';
	for (int i = 0; str[i] != '\0'; i++)
		str[i] += diff; // str[i] = str[i] + diff;
}

int main()
{
	char str[1024];
	cin >> str;

	if (validate(str))
    {
		capitalize(str);
        cout << str << endl;
    }
	else
		cout << "Invalid input" << endl;
}

