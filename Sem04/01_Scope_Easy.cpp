#include <iostream>
using namespace std;

// Example 1. Global variables without initialization
int a;
char c;
bool b;

int i = 7;

int main()
{
	cout << i << ' ';
	int i = 6;
	i = i + 1;

	{
		int i = -1;
		i = i + 1;
		cout << i << ' ';
	}

	cout << i << endl;
    cout << a << c << b << endl; // a = 0, c = ' ', b = 0
}