#include <iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 6;

void printSpiralTraversal(int matrix[ROWS][COLS])
{
    int currentRow = 0, currentCol = 0;
    int maxRow = ROWS, maxCol = COLS;

    while (currentRow < maxRow && currentCol < maxCol)
    {
        for (int i = currentCol; i < maxCol; i++)
            cout << matrix[currentRow][i] << ' ';
        currentRow++;

        for (int i = currentRow; i < maxRow; i++)
            cout << matrix[i][maxCol - 1] << ' ';
        maxCol--;

        if (currentRow < maxRow)
        {
            for (int i = maxCol - 1; i >= currentCol; i--)
                cout << matrix[maxRow - 1][i] << ' ';
            maxRow--;
        }

        if (currentCol < maxCol)
        {
            for (int i = maxRow - 1; i >= currentRow; i--)
                cout << matrix[i][currentCol] << ' ';
            currentCol++;
        }
    }
}

int main()
{
    int matrix[ROWS][COLS] = { {1, 2, 3, 4, 5, 6},
                               {16, 17, 18, 19, 20, 7},
                               {15, 24, 23, 22, 21, 8},
                               {14, 13, 12, 11, 10, 9} };
    printSpiralTraversal(matrix);
}