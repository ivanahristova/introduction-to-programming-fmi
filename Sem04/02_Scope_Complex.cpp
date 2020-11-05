#include <iostream>
using namespace std;

int i;

int main() 
{
    int i;
    i = 5;
    {
        int j, i;
        j = 1;
        i = 0;
        {
            int k, i;
            i = -1;
            j = 6;
            k = 2;
            {
                int j;
                j = 2;
                i = 1;
            }
        }
        cout << j << ' '; // 6; Не е равно на 1, защото на ред 17 вече сме й променили стойността.
    }

    cout << i << endl; // 5
    return 0;
}