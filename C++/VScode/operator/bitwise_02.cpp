#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    //  bitwise not: unsigned int의 범위는 0 ~ 4,294,967,295
    unsigned int a = 3;
    cout << std::bitset<4>(a) << " " << a << "\n";     // 3
    cout << std::bitset<4>(~a) << " " << (~a) << "\n"; // 4,294,967,292

    cout << "\n";

    unsigned int b = 0b1100;
    unsigned int c = 0b0110;
    cout << b << " " << c << "\n";

    // bitwise AND
    cout << std::bitset<4>(b & c) << "\n";

    // bitwise OR
    cout << std::bitset<4>(b | c) << "\n";

    // bitwise XOR
    cout << std::bitset<4>(b ^ c) << "\n";
}