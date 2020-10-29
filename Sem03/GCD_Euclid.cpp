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

	// 106 % 16 = (10)
	//       16 % 10 = (6)
	//            10 % 6 = 4
	//                 6 % 4 = 2
	//                     4 % 2 = 0

	while (num2 != 0)
	{
		int div = (num1 % num2);
		num1 = num2;
		num2 = div;
	}
    
	cout << num1 << endl;
}