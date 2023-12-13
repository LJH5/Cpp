#include <iostream>
using namespace std;

int main()
{
    // 주의사항
    double d1(100 - 99.99);
    double d2(10 - 9.99);

    // 두 개는 같은 값이 아니라고 인식
    /*
    if (d1 == d2)
        cout << "equal\n";
    else
    {
        cout << "not equal\n";

        if (d1 > d2)
            cout << "d1 > d2\n";
        else
            cout << "d1 < d2\n";
    }
    */

    // 5.32907e-15의 아주 근소한 차이
    cout << std::abs(d1 - d2) << "\n";

    // 해결방법: 미리 허용 오차를 지정
    const double ep = 1e-10;
    if(std::abs(d1 - d2) < ep)
        cout << "Approximately\n";
    else
        cout << "Not eaual\n";
}