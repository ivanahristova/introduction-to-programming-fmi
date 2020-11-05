#include <iostream>
using namespace std;

int main()
{
    //Algorithm:  101101 = 2^0 + 2^2 + 2^3 + 2^5 = 1 + 4 + 8 + 32 = 45

    int number;
    cin >> number;
    int result = 0;
    int coef = 1;

    while (number != 0)
    {
       int lastDigit = number % 10;
       result = result + lastDigit * coef; // result += (lastDigit * coef);
       coef = coef * 2; // coef *= 2;
       number = number / 10;
    }

    cout << result << '\n';

}