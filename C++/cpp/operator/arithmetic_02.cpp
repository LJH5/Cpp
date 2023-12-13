#include <iostream>
using namespace std;

int main()
{
    int x = 7;
    int y = 4;
    // 나머지
    cout << x % 4 << "\n";

    // 결과값의 자료형이 바뀜을 주의
    cout << x / y << "\n";
    cout << float(x) / y << "\n";
    cout << x / float(y) << "\n";
    cout << float(x) / float(y) << "\n";

    // C++11 부터는 나머지 버림
    cout << -5 / 2 << "\n";

    // C++11 부터는 왼쪽의 숫자의 부호에따라 결과의 부호가 결정
    cout << -5 % 2 << "\n";
}