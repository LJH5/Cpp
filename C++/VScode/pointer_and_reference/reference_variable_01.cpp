#include <iostream>
using namespace std;

int main()
{
    int value = 5;

    // 2개를 비교해보자
    int *ptr = nullptr;
    ptr = &value;

    // 반드시 초기화 되야함
    int &ref = value;
    // 리터널은 들어갈 수 없음

    cout << ref << "\n";

    ref = 10;   // *ptr = 10;와 비슷한 기능

    cout << value << " " << ref << "\n";

    // 차이가 무엇일까?
    cout << &value << "\n"; // 0x7fff1a1eddb4
    cout << &ref << "\n";   // 0x7fff1a1eddb4
    cout << ptr << "\n";    // 0x7fff1a1eddb4
    cout << &ptr << "\n";   // 0x7fff1a1eddb8
}