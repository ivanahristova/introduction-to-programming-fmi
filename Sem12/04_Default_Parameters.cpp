#include <iostream>
using namespace std;

double calculate(int a, double d, bool b = true, bool b2 = false)
{
	if (b || b2)
		return a + d;
	else
		return b;
}

int main()
{
	int a = 5;
	bool b = true;
	double d = 5.5;

	cout << calculate(a, d, b) << endl;
}