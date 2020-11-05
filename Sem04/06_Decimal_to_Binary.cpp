#include <iostream>
using namespace std;

int main()
{
    /* Algorithm:    
        2 / 2 = 1 (0)
        1 / 2 = 0 (1)
         => 10
        
        8 / 2 = 4 (0)
        4 / 2 = 2 (0)
        2 / 2 = 1 (0)
        1 / 2 = 0 (1)
         => 1000

        45 / 2 = 22 (1)
        22 / 2 = 11 (0)
        11 / 2 = 5 (1)
        5 / 2 = 2 (1)
        2 / 2 = 1 (0)
        1 / 2 = 0 (1)
         => 101101
    */

    int number;
    cin >> number;
    int binary = 0;
    int coef = 1;

    while (number > 0)
    {
       int lastDigitForFirst = number % 2;
       binary = binary + lastDigitForFirst * coef;
       coef = coef * 10;
       number = number / 2;
    }

    cout << binary;
}