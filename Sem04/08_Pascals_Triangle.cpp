#include<iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;
    int coef = 1;

    for (int currentRow = 0; currentRow < row; currentRow++)
    {
        int spacesLimit = row - currentRow;
        for (int space = 1; space < spacesLimit; space++)
            cout << ' ';
        
        for (int j = 0; j <= currentRow; j++)
        {
            if (j == 0 || currentRow == 0)
                coef = 1;
            else
                coef = coef * (currentRow - j + 1) / j;

            cout << coef << ' ';
        }

        cout << endl;
    }
}