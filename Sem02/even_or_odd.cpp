#include <iostream>
using namespace std;

int main() {
    // Задача: Извежда дали числото между 1 и 10 е четно или нечетно
	int number;
	cout << "Please enter a number between 1 and 10" << endl;
	cin >> number;

// Наивен подход
	switch (number)
	{
	case 1: cout << "Hello, odd!" << endl; break;
	case 2: cout << "Hello, even!" << endl; break;
	case 3: cout << "Hello, odd!" << endl; break;
	case 4: cout << "Hello, even!" << endl; break;
	case 5: cout << "Hello, odd!" << endl; break;
	case 6: cout << "Hello, even!" << endl; break;
	case 7: cout << "Hello, odd!" << endl; break;
	case 8: cout << "Hello, even!" << endl; break;
	case 9: cout << "Hello, odd!" << endl; break;
	case 10: cout << "Hello, even!" << endl; break;
	default: cout << "Number out of bounds!" << endl;
	}

// Няма нужда константите, с които сравняваме да са в нарастващ ред, но е хубаво кодът ни да е лесно четим
// Ако няма ключова дума break ще продължи изпълнението на всичко надолу докато не стигне break или края на блока
	switch (number)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 9: cout << "Hello, odd!" << endl; break;
	case 2:
	case 4:
	case 6:
	case 8:
	case 10: cout << "Hello, even!" << endl; break;
	default: cout << "Number out of bounds!" << endl;
	}

// Грешно решение. В case-овете на switch очакваме да имаме константи. n не може да участва.
	switch (number)
	{
	case (n % 2 == 0): cout << "Hello, even!" << endl; break;
	case (n % 2 == 1): cout << "Hello, odd!" << endl; break;
	default: cout << "Index out of bounds!" << endl;
	}

// Решение с вложен if 
	if (number >= 1 && number <= 10)
	{
		if (number % 2 == 0)
			cout << "Hello, even!" << endl;
		else
			cout << "Hello, odd!" << endl;
	}
	else
	{
		cout << "Number out of bounds!" << endl;
	}

// Решение с else-if
	if (!(number >= 1 && number <= 10))
		cout << "Number out of bounds!" << endl;
	else if (number % 2 == 0)
		cout << "Hello, even!" << endl;
	else 
		cout << "Hello, odd!" << endl;


	return 0;
}