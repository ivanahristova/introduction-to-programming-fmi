#include <iostream>
using namespace std;

void f(int* a)
{
	*a += 10;
}

int main()
{
    int variableToChange = 6;
	f(&variableToChange);
	cout << variableToChange << endl;

    // Pointers are variables that hold an address.
	int a = 5, b = 6;
	int *a_ptr = &a, *b_ptr = &b;

	cout << a_ptr << ' ' << b_ptr << endl;
	cout << *a_ptr << endl;

	*a_ptr = *b_ptr;
	cout << a << endl;

	int c = 7;
	int *c_ptr;
	c_ptr = &c;

	a_ptr = c_ptr;
	cout << *a_ptr << endl;

	// Arrays are pointers to their first element.
	int matrix[5] = { 1, 2, 3, 4, 5 };
	int* ptr = matrix; // Now both pointers are pointing to the same memory.
	cout << ptr[2] << endl;
	ptr[2] = 22;
	cout << matrix[2] << endl;

	// If we miss the * we just copy the value in another vairable of the same type.
	int var = 5;
	int ptr_var = var; // This is not a pointer.

	// N-dimensional arrays
	int one_d[2];
	int two_d[3][2] = { {1,2}, {2, 3}, {5,6} };

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			cout << two_d[i][j] << ' ';

	cout << endl;
	int three_d[4][3][2] = {{ {1,2}, {2, 3}, {5,6} }, { {1,2}, {2, 3}, {5,6} }, { {1,2}, {2, 3}, {5,6} }, { {1,2}, {2, 3}, {5,6} } };

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 3; j++)
			for (int k = 0; k < 2; k++)
				cout << three_d[i][j][k] << ' ';
}