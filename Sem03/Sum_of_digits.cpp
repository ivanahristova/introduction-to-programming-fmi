#include <iostream>
using namespace std;

int main()
{
    int number, sumDigits = 0;
    cin >> number;

    while (number != 0)
    {
        int lastDigit = number % 10;
        sumDigits += lastDigit;
        number /= 10;
    }

    cout << "Sum of digits: " << sumDigits << endl;
    
}