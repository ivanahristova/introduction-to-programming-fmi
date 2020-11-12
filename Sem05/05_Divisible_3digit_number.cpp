#include <iostream>
using namespace std;

int main()
{
    // Print all 3-digit numbers that are divisible by all their digits and do not contain 0

    // isDivisible has initial value false 
    for (int i = 100; i < 1000; i++)
	{
		bool isDivisible = false;
		int num = i;

		while (num != 0)
		{
			isDivisible = false;
			int lastDigit = num % 10;
			if (lastDigit == 0)
				break;

			if (i % lastDigit == 0)
				isDivisible = true;
			
			if (!isDivisible)
				break;

			num /= 10;
		}
		if (isDivisible)
			cout << i << ' ';
	}

    cout << endl;

    // isDivisible has initial value true
    for (int i = 100; i < 1000; i++)
	{
		bool isDivisible = true;
		int num = i;

		while (num != 0)
		{
			int lastDigit = num % 10;
			if (lastDigit == 0 || i % lastDigit != 0)
			{
				isDivisible = false;
				break;
			}
			num /= 10;
		}

		if (isDivisible)
			cout << i << ' ';
	}

}
