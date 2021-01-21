#include <iostream>
using namespace std;

void func(int& x, int* y, int z) // x = b4 , y = &a, z = 4
{
	int a = 3;
	int b = 5;
	x = z - b; // 4 - 5 = -1
	*y = 2 * z + 3 * x; // 2 * 4 - 3 = 5 
	z = a + *y; // 3 + 5 = 8
	cout << "func: x = " << x << endl; // -1
	cout << "func: y = " << *y << endl; // 5
	cout << "func: z = " << z << endl; // 8
	cout << "func: a = " << a << endl; // 3
	cout << "func: b = " << b << endl; // 5
	return;
}

int main()
{ int a = 2;
 int b = 4;
 func(b, &a, b);
 cout << "main: a = " << a << endl;
 cout << "main: b = " << b << endl;
 return 0;
}
