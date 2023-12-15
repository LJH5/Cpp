#include <iostream>
// 입출력 자리수 조절
#include <iomanip>
using namespace std;

int main()
{
    cout << 1.0 / 3.0 << "\n";
    cout << std::setprecision(16);
    cout << 1.0 / 3.0 << "\n";

    float f(123456789.0f);
    cout << std::setprecision(9);
    // 123456792로 오차가 발생한다
    cout << f << "\n";

    double d(0.1);
    cout << d << "\n";
    cout << std::setprecision(17);
    // 오차가 발생, 가장 가까운 값을 표현할뿐 정확한 값은 아니다
    cout << d << "\n";
}