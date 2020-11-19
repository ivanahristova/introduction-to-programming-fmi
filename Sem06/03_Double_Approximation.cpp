#include <iostream>
using namespace std;

int main()
{
    double d = 0.1;
	double r = 0;

	for (int i = 0; i < 10; i++) // 0.1 + 0.1 + ... + 0.1 (10x) = 1
		r += d;
	
	cout << (r == 1) << endl;
	double eps = 0.0001;
	if (r - 1 < eps)
		cout << "Yes" << endl;
}