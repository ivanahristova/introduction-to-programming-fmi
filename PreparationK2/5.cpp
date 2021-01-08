#include <iostream>
#include <cmath>
using namespace std;

bool primeCheck(int n, int square)
{
    if (square == 1)
        return true;

    if (n % square == 0)
        return false;

    return primeCheck(n, --square);
}

int main()
{
    int num = 0;

    do {
        cin >> num;
    } while (num <= 1);

    cout << primeCheck(num, (int)sqrt(num));
}