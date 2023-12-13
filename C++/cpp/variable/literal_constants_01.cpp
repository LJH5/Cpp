#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    // 8진수
    int x = 012;
    cout << x << "\n";
    // 16진수
    int y = 0xF;
    cout << y << "\n";
    // 2진수
    int z = 0b1010;
    cout << z << "\n";
    // C++14부터 지원
    int b = 0b1010'1111'0000;
    cout << b << "\n";

    return 0;
}
