#include <iostream>
using namespace std;

int main()
{
    bool b1 = true;     // copy initialization
    bool b2(false);     // direct initialization
    bool b3{ true };    // uniform initialization

    // 1, 0이 아닌 true, false로 출력되도록 함
    cout << std::boolalpha;
    cout << b1 << "\n";
    // boolalpha 해제
    cout << std::noboolalpha;
    cout << b2 << "\n";

    // not 반전
    cout << !b3 << "\n";

    // 논리 연산
    cout << (true && false) << "\n";
    cout << (true || false) << "\n";
}