#include <iostream>
using namespace std;

int main()
{
    // Determine whether a positive number's digits are ascending from the beginning until the end
    // 12345 -> Yes
    // 12334 -> No
    // 12354 -> No
    // 1 -> Yes

    int num;
    do {
	    cin >> num;
    } while (num < 0);

    bool ascending = true;
    int toCompare = 10;

    while ( num != 0)
    {
        int lastDigit = num % 10;
        if (lastDigit >= toCompare)
        {
            ascending = false;
            break;
        }

        toCompare = lastDigit;
        num /= 10;
    }

    if (ascending)
		cout << "Yes" << endl;
	
	else
		cout << "No" << endl;
}