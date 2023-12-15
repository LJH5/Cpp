#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {

    double a, b;
    cin >> a >> b;

    // 출력 자리수 변경
    cout.precision(12);
    cout << fixed;
    cout << a / b << "\n";

    return 0;
}