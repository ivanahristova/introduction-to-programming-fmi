#include <iostream>
using namespace std;

int main()
{
    int number, power; 
    cin >> number >> power;
    int result = 1;

    for (int i = 0; i < power; i++)
    {
       result = result * number; // result *= number; 
    }

    cout << result;
}