#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    if (num2 > num1) // always num1 > num2
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	int divisor = num2;
	bool foundSolution = false;

	while (!foundSolution)
	{
		if (num1 % divisor == 0 && num2 % divisor == 0)
			foundSolution = true;
		else
			divisor--;
	}
	cout << divisor << endl;
}