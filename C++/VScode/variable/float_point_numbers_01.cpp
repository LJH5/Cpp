#include <iostream>
#include <limits>
using namespace std;

int main()
{
    // 부동소수점: 부호, 지수, 가수로 구분
    // 4byte
    float f(3.141592f);
    // 8byte
    double d(3.141592);
    // 8 ~ 16byte
    long double ld(3.141592);

    // 타입의 최대값
    cout << numeric_limits<float>::max() << "\n";
    cout << numeric_limits<double>::max() << "\n";
    cout << numeric_limits<long double>::max() << "\n";

    // 타입의 최소값
    cout << numeric_limits<float>::lowest() << "\n";
    cout << numeric_limits<double>::lowest() << "\n";
    cout << numeric_limits<long double>::lowest() << "\n";

    // 지수 표기법
    cout << 3.14 << "\n";
    cout << 31.4e-1 << "\n";

    if (3.14 == 31.4e-1)
    {
        cout << "같다" << "\n";
    }

}