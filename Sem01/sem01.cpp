#include <iostream>
using namespace std;

int main()
{
	int num; // Декларация на променлива (казваме, че съществува)
	int a = 5; // Инициализация на променлива (даваме й стойност)
	int b = 2;

	// Аритметични оператори
	int difference = a - b; // difference = 5 - 2
	cout << difference << endl; // 3
	cout << a + b << endl; // 7
	cout << a * b << endl; // 10
	cout << a / b << endl; // 2
	int remainder = a % b; // 
	cout << remainder << endl; // 1	
	cout << endl; // Принтира нов ред

	// ++ и -- като префиксен и постфиксен оператор 
	// Префиксен - инкрементира и връща *новата* стойност
    // Постфиксен - инкрементира и връща *старата* стойност
	a = 5;
	a++; // 6
	a--; // 5

	cout << a++ << endl; // 5
	cout << ++a << endl; // 7
	cout << --a << endl; // 6
	cout << a-- << endl; // 6
	cout << endl;

	// Type casting
	int a1 = 65;
	bool b1 = a1;
	char c1 = a1;
	double d1 = a1;

	cout << a1 << endl; // 65
	cout << b1 << endl; //  1
	cout << c1 << endl; //  A
	cout << d1 << endl; // 65.0
	cout << endl;

	double d2 = 97.5;
	int a2 = d2;
	bool b2 = d2;
	char c2 = d2;

	cout << a2 << endl; // 97
	cout << b2 << endl; // 1
	cout << c2 << endl; // a
	cout << d2 << endl; // 97.5
	cout << endl;

	// Оператори за присвояване
	int c, d, e, f;
	cout << (a = b = c = d = e = f = 5) << endl; // Защо оператор = връща стойност
	cout << (a += 5) << endl; // a = a + 5; => a = 10;
    cout << a << endl;
    cout << (a -= 5) << endl; // a = a - 5; => a = 5
    cout << a << endl;
    cout << (a *= 5) << endl; // a = a * 5; => a = 25
    cout << a << endl;
    cout << (a /= 5) << endl; // a = a / 5; => a = 5
    cout << (a %= 5) << endl; // a = a % 5; => a = 0;
	cout << endl;

	// Оператори за сравнение (връщат булева стойност - true/false)
	a = 2;
	b = 3;
	c = 3;

	cout << (a == b) << endl; // 0
	cout << (a != b) << endl; // 1
	cout << (a <= b) << endl; // 1
	cout << (a >= c) << endl; // 0
	cout << (a < b) << endl;  // 1
	cout << endl;

	// Побитови оператори - работят върху двоичното представяне на числото
	cout << a << " " << (a << 1) << endl; // 0010 => 0100 (При << всички символи се изместват с едно наляво с дадения брой позиции) 
	a <<= 1; // еквивалентно на: а = а << 1;
	cout << a << " " << (a << 1) << endl; // 0100 => 1000
	cout << a << " " << (a >> 2) << endl; // 0100 => 0001 (При >> всички символи се изместват с едно надясно с дадения брой позиции)
	b = 5;
	cout << a << " " << (a | b) << endl; // 0100 => (0100 | 0101) = 0101 (на позициите, на които имаме поне една единица се запазва)
	cout << a << " " << (a & b) << endl; // 0100 => (0100 & 0101) = 0100 (на позициите, на които имаме 2 единици се запазва)
}
