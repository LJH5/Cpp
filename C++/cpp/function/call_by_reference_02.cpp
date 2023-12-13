#include <iostream>
#include <cmath> // sin(), cos()
using namespace std;

// c++은 리턴이 하나만 가능이라 입출력을 매개변수로 처리
void getSinCos(const double &degrees, double &sin_out, double &cos_out)
{
    // static은 한번만 실행, 공통적으로 사용되는 것은 static으로 처리
    static const double pi = 3.141592 / 180.0;
    const double radians = degrees * pi ;
    sin_out = std::sin(radians);
    cos_out = std::cos(radians);
}

int main()
{
    double sin(0.0);
    double cos(0.0);

    getSinCos(30.0, sin, cos);

    cout << sin << " " << cos << "\n";
}