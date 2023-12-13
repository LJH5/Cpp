#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // 0으로 나누기
    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;

    // inf 값인지 확인
    cout << posinf << " " << std::isinf(posinf) << "\n";
    cout << neginf << " " << std::isinf(neginf) << "\n";
    // nan 값인지 확인
    cout << nan << " " << std::isnan(nan) << "\n";
}