#include <iostream>
using namespace std;

int main()
{
    int day; // input 1-7
	cin >> day;

// Грешно решение! Дори да намери деня (например при day = 2), пак ще мине през всички останали проверки
    if (day == 1)
		cout << "Monday" << endl;
	if (day == 2)
		cout << "Tuesday" << endl;
	if (day == 3)
		cout << "Wednesday" << endl;
	if (day == 4)
		cout << "Thursday" << endl;
	if (day == 5)
		cout << "Friday" << endl;
	if (day == 6)
		cout << "Saturday" << endl;
	if (day == 7)
		cout << "Sunday" << endl;

// По-добро решение.
// В случай, че имаме невалиден вход ще изведе подходящо съобщение.
	if (day == 1)
		cout << "Monday" << endl;
	else if (day == 2)
		cout << "Tuesday" << endl;
	else if (day == 3)
		cout << "Wednesday" << endl;
	else if (day == 4)
		cout << "Thursday" << endl;
	else if (day == 5)
		cout << "Friday" << endl;
	else if (day == 6)
		cout << "Saturday" << endl;
	else if (day == 7)
		cout << "Sunday" << endl;
	else
		cout << "Invalid day" << endl;

// Вариант за решение със switch
    switch (day)
	{
	case 1: cout << "Monday" << endl; break;
	case 2: cout << "Tuesday" << endl; break;
	case 3: cout << "Wednesday" << endl; break;
	case 4: cout << "Thursday" << endl; break;
	case 5: cout << "Friday" << endl; break;
	case 6: cout << "Saturday" << endl; break;
	case 7: cout << "Sunday" << endl; break;
	default: cout << "Invalid day" << endl; 
	}


    return 0;
}