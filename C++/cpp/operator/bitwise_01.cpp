#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    // shift

    // left shift: 왼쪽으로 밀기, *2
    unsigned int a = 3;
    cout << std::bitset<8>(a) << " " << a << "\n";
    cout << std::bitset<8>(a << 1) << " " << (a << 1) << "\n";
    cout << std::bitset<8>(a << 2) << " " << (a << 2) << "\n";
    cout << std::bitset<8>(a << 3) << " " << (a << 3) << "\n";
    cout << std::bitset<8>(a << 4) << " " << (a << 4) << "\n";
    cout << "\n";

    // right shift: 오른쪽 밀기, /2
    unsigned int b = 192;
    cout << std::bitset<8>(b) << " " << b << "\n";
    cout << std::bitset<8>(b >> 1) << " " << (b >> 1) << "\n";
    cout << std::bitset<8>(b >> 2) << " " << (b >> 2) << "\n";
    cout << std::bitset<8>(b >> 3) << " " << (b >> 3) << "\n";
    cout << std::bitset<8>(b >> 4) << " " << (b >> 4) << "\n";
    cout << "\n";
}