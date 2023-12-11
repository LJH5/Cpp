#include <iostream>
using namespace std;

// void[generic] pointer

int main()
{
    int i = 5;
    double d = 3.0;

    // 어떤 타입인지 알 수 없음
    void *ptr = nullptr;

    ptr = &i;
    ptr = &d;

    // byte 크기 몰라 사용 불가능
    // cout << ptr + 1 << "\n";

    cout << &d << " " << ptr << "\n";
    // 타입을 몰라 사용 불가능
    // cout << *ptr << "\n";
    cout << *static_cast<float*>(ptr) << "\n";
}