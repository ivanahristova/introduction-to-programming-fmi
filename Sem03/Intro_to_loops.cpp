#include <iostream>
using namespace std;

int main()
{
    // Задача: Сума на 5 числа

    // Без цикъл
    int n1, n2, n3, n4, n5;
	cout << "Input a number: " << endl;
	cin >> n1;
	cout << "Input a number: " << endl;
	cin >> n2;
	cout << "Input a number: " << endl;
	cin >> n3;
	cout << "Input a number: " << endl;
	cin >> n4;
	cout << "Input a number: " << endl;
	cin >> n5;
	cout << "Sum: " << (n1 + n2 + n3 + n4 + n5) << endl;

    // Итерация while, но без горна граница за брой числа 
    int number1;
	cout << "Input a number: " << endl; // *
	cin >> number1;
	int sum1 = 0;
	while ( number1 != 0)
	{
		sum1 += number1;
		cout << "Input a number: " << endl; // * повторение на код преди и в цикъла
		cin >> number1;
	}
	cout << sum1 << endl;

    // Итерация do-while - без повторението от while и с горна граница
    int number2;
    int sum2 = 0;
	int maxNum = 5;
	do {
		cout << "Input a number: " << endl;
		cin >> number2;
		sum2 += number2;
	} while (--maxNum > 0); 
	cout << sum2;

    // Итерация for
    int number3, sum3 = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Input a number: " << endl;
		cin >> number3;
		sum3 += number3;
	}
	cout << sum3 << endl;
}