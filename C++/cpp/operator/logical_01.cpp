#include <iostream>
using namespace std;

int main()
{
    // 참/거짓을 0/1 -> true/false로 출력
    cout << boolalpha;

    // logical NOT
    bool x = true;
    cout << !x << "\n";

    // logical AND, OR보다 우선순위 높음
    bool y = false;
    cout << (x && y) << "\n";

    // logical OR
    cout << (x || y) << "\n";

    // logical XOR
    cout << (x != y) << "\n";
}