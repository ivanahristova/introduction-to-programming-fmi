#include<iostream>
using namespace std;

int main()
{
    int count = 5;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++) // Различна променлива от тази във външния цикъл
        {
            cout << i * j << '\n';
        }
        cout << '\n';
    }
}