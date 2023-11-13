#include <iostream>
#include <cmath>    //sqrt()
using namespace std;

int main()
{
    double x;

tryAgain : // label
    cout << "음수가 아닌 수를 입력하세요: \n";
    cin >> x;

    if (x < 0.0)
        goto tryAgain;

    cout << sqrt(x) << "\n";
}