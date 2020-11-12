#include <iostream>
using namespace std;

int main()
{
    // Determine whether a positive number's digits are ascending from the beginning until the end
    // 12345 -> Yes
    // 12334 -> No
    // 12354 -> No
    // 1 -> Yes

    int n;
    do {
	    cin >> n;
    } while (n < 0);

	bool isAscending = true;
	while ( n != 0 )
	{
		int lastDigit = n % 10;
		n /= 10;
		int penultimateDigit = n % 10;

		if (lastDigit > penultimateDigit)
			continue;
		
		else
		{
			isAscending = false;
			break;
		}
	}

	if (isAscending)
		cout << "Yes" << endl;
	
	else
		cout << "No" << endl;
}