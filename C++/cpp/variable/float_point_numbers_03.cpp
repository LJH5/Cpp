#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double d1(1.0);
    double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

    // 두개가 같은 값으로 보인다
    cout << d1 << "\n";
    cout << d2 << "\n";

    // 하지만 자세히 보면 다른 값이다 이것은 컴퓨터의 한계
    cout << std::setprecision(17);
    cout << d1 << "\n";
    cout << d2 << "\n";
}