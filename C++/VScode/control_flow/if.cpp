#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "숫자 x를 입력하세요: ";
    cin >> x;

    // c++은 블럭으로 조건문을 구분
    // if (x > 10); null statement if문 작동 안 함
    if (x > 10)
    {
        cout << "x is greater than 10\n";
    }
    else
    {
        cout << "x is less than 10\n";
    }
}