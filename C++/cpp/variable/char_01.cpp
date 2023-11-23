#include <iostream>
using namespace std;

int main()
{
    // 숫자를 입력해도 char은 문자, 아스키코드로 변환
    char c1(65);
    // 문자는 '', 문자열은 ""
    char c2('A');

    cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << "\n";

    // c style
    cout << (char)65 << "\n";
    cout << (int)'A' << "\n";
    // cpp style
    cout << char(65) << "\n";
    cout << int('A') << "\n";

    cout << static_cast<char>(65) << "\n";
    cout << static_cast<int>('A') << "\n";
}