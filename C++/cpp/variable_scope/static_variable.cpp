#include <iostream>
using namespace std;

// static으로 선언된 global 변수는 다른 파일에서 사용할 수 없음
static int g_a = 100;

void doSomething()
{
    // int a = 1;
    static int a = 1;

    cout << a << "\n";
    ++a;
}

int main()
{
    // static으로 선언되기 전 -> 후
    doSomething();  // 1 -> 1
    doSomething();  // 1 -> 2
    doSomething();  // 1 -> 3
}