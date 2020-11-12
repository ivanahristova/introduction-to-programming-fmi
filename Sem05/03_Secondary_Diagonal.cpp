#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the size of the matrix: ";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int leadingZeros = N - i;
        for (int j = 0; j < leadingZeros; j++)
            cout << "- ";

        cout << i << ' ';

        int trailingDashes = i - 1;
        for (int j = trailingDashes; j > 0; j--)
            cout << "- ";

        cout << endl;
    }

}