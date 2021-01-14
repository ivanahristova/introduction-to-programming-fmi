#include <iostream>
using namespace std;

/*
Зад. 3
Ще получите число n, отговарящо на броя на елементите от 
множество от естествени числа, 
които ще бъдат последователно въведени от потребителя.
1.) Да се изведат всички числа от множеството, в чийто двоичен запис 
броят на единиците е по-голям от броя на нулите.
2.) Да се провери дали в множеството присъстват всички цифри.
3.) Ако точка 2. е изпълнена, да се сортират елемнтите на множеството 
според сумата от цифрите им. 
(Числата с еднаква сума трябва да запазват относителната си наредба)

За решението на 1. и 2. да се използва рекурсия.

Примери:
Вход: 10
      2 8 11 12 24 37 102 340 756 1024
Изход: 1.) 11 102 756
       2.) 0
Вход: 20
      2 3 4 5 6 7 8 23 24 25 26 30 31 78 456 4567 10235 12555 17889 20000
Изход: 1.) 3 5 6 7 23 25 26 30 31 78 4567 10235
       2.) 1
       3.) 2 20000 3 30 4 31 5 23 6 24 7 25 8 26 10235 78 456 12555 4567 17889

*/

void digits(int number, bool* hist)
{
	if (number == 0)
		return;

	int last = number % 10;
	number /= 10;
	hist[last] = true;
	return digits(number, hist);
}

bool allDigit(bool* hist)
{
	for (int j = 0; j < 9; j++)
		if (hist[j] == 0)
			return false;
	
	return true;
}

int sumDigits(int number)
{
	if (number == 0)
		return 0;
	
	return (number % 10 + sumDigits(number / 10));
}

void InsertionSort(int* arr, int size, int* sumedNumbers)
{
	for (int i = 1; i < size; i++)
	{
		int elementSum = sumedNumbers[i];
		int arrElement = arr[i];
		int ind = i - 1;

		while (ind >= 0 && sumedNumbers[ind] > elementSum)
		{
			sumedNumbers[ind + 1] = sumedNumbers[ind];
			arr[ind + 1] = arr[ind];
			ind--;
		}
		sumedNumbers[ind + 1] = elementSum;
		arr[ind + 1] = arrElement;
	}
}

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	// 1. е правена на практикум

    // 2.
	const int SIZE = 10;
	bool histogram[SIZE] = {}; // Всички елементи се нулират

	bool hasAllDigits = false;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
			histogram[0] = true;
		digits(arr[i], histogram);

		if (allDigit(histogram))
		{
			hasAllDigits = true;
			break;
		}
	}

    // 3. се изпълнява само при hasAllDigits = true
	if (!hasAllDigits)
		return 0;

	int* sumNumberArray = new int[n];
	for (int i = 0; i < n; i++)
		sumNumberArray[i] = sumDigits(arr[i]);

    // сортираме спрямо намерените суми
    // така извършваме сумирането само по един път върху всеки елемент
	InsertionSort(arr, n, sumNumberArray);
    for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
		
	delete[] arr;
	delete[] sumNumberArray;
}