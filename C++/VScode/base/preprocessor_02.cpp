#include <iostream>
using namespace std;

// 영역에 주의할 것
#define APPLE

int main()
{
// 주로 멀티 플랫폼 등에 사용
// 정의되어 있다면
#ifdef APPLE
    cout << "Apple" << "\n";
#else
    cout << "Banana" << "\n";
#endif

// 정의되어 있지 않다면
#ifndef APPLE
    cout << "Orange" << "\n";
#endif

}