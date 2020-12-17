#include <iostream>
using namespace std;

// Memory leak
// new == delete
void f()
{
	int* arr = new int[5];
	// delete[] arr;
}

int* f1()
{
	int arr[4] = { 1, 2, 3, 4 };
	int* ptr = arr;
	return ptr;
} // arr gets automatically deleted from the stack once the function ends => ptr points to deallocated memory

int* f2()
{
	int* ptr = new int[4];
	ptr[0] = 1;
	ptr[1] = 2;
	ptr[2] = 3;
	ptr[3] = 4;
	return ptr;
} // ptr is allocated dynamically => unless we delete the memory from the heap it will not be automatically deleted

int main()
{
	int* arr1 = f1();
	int* arr2 = f2();
	cout << arr1[0];
	cout << arr2[0];

	delete[] arr2;

	// Check for a memory leak:
	while (true)
	{
		f();
	}

	int a; // 4 bytes
	char c; // 1 byte
	bool b; // 1 byte
	char arr1[7]; // 8 bytes 
	// Total: 14 bytes

	// Stack vs Heap
	int arr2[7]; // static
	int* ptr = new int[7]; // dynamic

	// Difference between:
	// delete[] ptr;
	// delete ptr; 
}