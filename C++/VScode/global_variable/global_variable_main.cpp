#include <iostream>
#include "Constants.h"
using namespace std;

// 하지만 전역변수를 이렇게 쓰는 것은 권하지 않는다!!
int g_value = 1;

// forward declaration
extern void testFunction();

int main()
{
    cout << g_value << "\n";

    testFunction();

    int g_value = 123;

    cout << g_value << "\n";

    testFunction();

    // 전역변수는 이렇게 사용하는 것을 권장
    cout << "Constants.h: " << Constants::g_value << " " << &Constants::g_value << "\n";

    cout << g_value << "\n";

    return 0;
}