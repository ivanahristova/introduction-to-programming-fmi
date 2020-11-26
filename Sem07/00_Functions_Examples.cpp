#include <iostream>
using namespace std;

/*
Кратка теория:

Скелет на функция:

<тип на връщане> <име>([<параметри>])
{
    <тяло на функцията>
    ...
    ...
    ...

    // return statement, ако типът го изисква (т.е. не е void)
}

Типове на връщане:
-всички изучавани до момента
-void (празен тип; не изисква функцията да връща нищо)

Параметри:
-задават се чрез *типа* им и името, с което ще ги ползваме

Аргументи:
-подават се на функцията при извикването й
-трябва да бъдат инициализирани

Декларация vs дефиниция:
-чрез декларацията казваме, че "такава функция съществува"
-чрез дефиницията казваме "какво ще прави тази функция"
-в С++ всички функции трябва да бъдат декларирани *преди* main функцията!
-дефиниция и декларация могат да се разделят
-дефиницията може да е след main

Извикване:
-става чрез името на функцията и подаване на аргументи, ако такива са нужни
-можем да викаме една функция много пъти
-ако функцията връща стойност можем да я присвояваме на променлива от подходящ тип
-функции могат да се влагат една в друга
*/

// Декларация:
void thisFunctionExists();

// Дефиниция:
void printHelloWorld()
{
    cout << "Hello world!" << endl;
}

// Влагане на функции:
void printNumber(int num)
{
    cout << num << ' ';
}
void findEvenNumbersUntil10()
{
    for (int i = 0; i < 10; i++)
        if (i % 2 == 0)
            printNumber(i);
    cout << endl;   
}

// Връщане на стойност
int factorial(int num)
{
	int fact = 1;
	for (int i = 2; i <= num; i++)
		fact *= i;
	
	return fact;
}

int main()
{
    printHelloWorld();
    findEvenNumbersUntil10();

    int a = 3, b = 4, c = 5, d = 6;
    
    // Намиране на факториел без функции:
    int fact_A1 = 1, fact_B1 = 1, fact_C1 = 1, fact_D1 = 1;
    for (int i = 2; i <= a; i++)
		fact_A1 *= i;
    for (int i = 2; i <= b; i++)
		fact_B1 *= i;
    for (int i = 2; i <= c; i++)
		fact_C1 *= i;
    for (int i = 2; i <= d; i++)
		fact_D1 *= i;

    // Намиране на факториел с функции:
    int fact_A2 = factorial(a);
    int fact_B2 = factorial(b);
    int fact_C2 = factorial(c);
    int fact_D2 = factorial(d);

    cout << fact_A1 << ' ' << fact_B1 << ' ' << fact_C1 << ' ' << fact_D1 << endl;
    cout << fact_A2 << ' ' << fact_B2 << ' ' << fact_C2 << ' ' << fact_D2 << endl;
}