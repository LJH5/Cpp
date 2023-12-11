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
    int *matrix = new int[row * col];

    // 1차원을 2차원 배열 처럼 사용
    for (int r = 0; r < row; r++)
        for (int c = 0; c < col; c++)
            matrix[c + col * r] = datas[r][c];

    // print all elements
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
            cout << matrix[c + col * r] << " ";
        cout << "\n";
    }

    delete[] matrix;
}