#include <iostream>
using namespace std;

// Pointers
// Require additional memory
// Dereferencing - *
// Have a null value - nullptr

// Reference
// Cannot change the object it is referring to
// Accessing value through identificator
// Must be initialized upon declaration

void f(int a)
{
	a++;
}

void f2(int& a)
{
	a++;
}

void f(int& a, int* b, int*& c, int d = 3)
{
	int e = a + *b; // 10
	int f = *c - 1; // 15 - 1 = 14
	e /= d; // 3
	cout << "e: " << e << " &e: " << &e << endl; // 3
	cout << "f: " << f << " &f: " << &f << endl; // 14
	cout << "d: " << d << endl;                  // 3
	cout << "a: " << a << " &a: " << &a << endl; // 5
	cout << "b: " << *b << " &b: " << &b << endl; // 5
	cout << "c: " << *c << " &e: " << &c << endl; // 15
}

int main()
{
    int a = 5;

	f(a);
	cout << a << endl; // 5
	f2(a);
	cout << a << endl; // 6

    a = 5;
    int b = 10, c = 15;
	int* ptr_a = &a;
	int* ptr_c = &c;

	f(a, ptr_a, ptr_c);
	cout << endl;
	cout << "a: " << a << " &a: " << ptr_a << endl; 
	cout << "b: " << b << " &b: " << &b << endl;
	cout << "c: " << c << " &c: " << ptr_c << endl;
	cout << "c: " << c << " &ptr_c: " << &ptr_c << endl;
}

