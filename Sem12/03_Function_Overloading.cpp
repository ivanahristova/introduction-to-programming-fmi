#include <iostream>
using namespace std;

void print(int a)
{
	cout << "Integer: " << a << endl;
}

void print(double d)
{
	cout << "Double: " << d << endl;
}

void print(bool b)
{
	cout << "Bool: " << b << endl;
}

void print(char c)
{
	cout << "Character: " << c << endl;
}

int max(int a, int b)
{
	return (a > b) ? a : b;
}

int max(int a, int b, int c)
{
	return max(max(a, b), c);
}

int max(int a, int b, int c, int d)
{
	return max(max(a,b,c), d);
	// return max(max(a, b), max(c, d));
}

int max(int a, int b, int c, int d, int e)
{
	return max(max(a, b, c, d), e);
}

int main()
{
	// Function overloading
	int a = 5;
	bool b = true;
	double d = 5.5;
	char c = 'A';

	print(a);
	print(b);
	print(d);
	print(c); // 'A' = 65

	cout << max(1, 2, 3, 4, 5) << endl;
	cout << max(10, 0, 23) << endl;
}