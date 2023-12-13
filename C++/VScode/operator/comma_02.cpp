#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 10;  // 여기서는 구분 기호
    int z;

    z = a, b;   // 연산자 우선순위 주의할 것
    z = (a, b);
}