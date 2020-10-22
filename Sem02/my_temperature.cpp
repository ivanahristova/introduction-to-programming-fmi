#include <iostream>
using namespace std;

int main() {
    
    unsigned my_temperature;
	cin >> my_temperature;

// Вариант с проверка с логическо И (и двата израза трябва да са истина, за да бъде целият израз за if истина)
	if (my_temperature > 35 && my_temperature < 37)
	{
		cout << "Please enter!" << endl;
	}
	else
	{
		cout << "Please do not enter!" << endl;
	}

// Вариант с проверка с логическо ИЛИ => (поне едното трябва да е истина, за да бъде целият израз за if истина)
	if (my_temperature < 35 || my_temperature > 37)
	{
		cout << "Please do not enter!" << endl;
	}
	else
	{
		cout << "Please enter!" << endl;
	}


    return 0;
}