#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    // int x = 2;
    int y = 2;

    // short circuit evaluation
    // &&: 왼쪽의 식이 false이면 어차피 false이므로 오른쪽의 식은 처리 안 함
    // ||: 왼쪽 식이 true이면 어차피 true이므로 오른쪽 식 처리 안 함
    if (x == 1 && y++ == 2)
    {
        cout << y << "\n";
    }
    else
    {
        cout << y << "\n";
    }
}