#include <iostream>
using namespace std;

// forward declaration: 전방 선언, 미리 함수만 선언하고 아래에서 정의
int add(int a, int b);
int mul(int a, int b);
int sub(int a, int b);

int main()
{
    cout << add(1, 2) << "\n";
}

// definition
int add(int a, int b)
{
    return a + b;
}

int mul(int a, int b)
{
    return a * b;
}

int sub(int a, int b)
{
    return a - b;
}

