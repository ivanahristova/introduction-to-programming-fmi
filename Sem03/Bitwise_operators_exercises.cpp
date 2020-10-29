#include <iostream>
using namespace std;

int main()
{
    /*
     & - побитово и
     | - побитово или
     ^ - побитово изключващо или
     ~ - побитово отрицание
     << - шифт наляво
     >> - шифт надясно
    */

    // Разлика между & и &&
    int temp1 = 2, temp2 = 5;
    cout << (temp1 & temp2) << endl;
    cout << (temp1 && temp2) << endl;

    // зад. 1: Вход - целочислено число; n-тия бит на числото
    //         Изход - какъв е n-тия бит   
    unsigned int n, nBit;
	cin >> n >> nBit;
	cout << ((n >> nBit) | 0) << endl; // 1-ви начин
	cout << ((n >> nBit) & 1) << endl; // 2-ри начин

    // зад. 2: Смяна на стойностите на 2 числа чрез побитови оператори
    int num1, num2;
    cin >> num1 >> num2;
    
    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;

    cout << num1 << ' ' << num2 << endl;
}