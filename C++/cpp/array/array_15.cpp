#include <iostream>
using namespace std;

int main()
{
    const int row = 3;
    const int col = 5;

    const int datas[row][col] =
        {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15},
        };

    // 이중 포인터를 이용한 이차원 배열 동적 할당
    int **matrix = new int *[row];
    for (int r = 0; r < row; r++)
        matrix[r] = new int[col];

    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            matrix[r][c] = datas[r][c];

    // print all elements
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            cout << matrix[r][c] << " ";
        }
        cout << "\n";
    }

    // delete
    for (int r = 0; r < row; r++)
        delete[] matrix[r];
    delete[] matrix;
}