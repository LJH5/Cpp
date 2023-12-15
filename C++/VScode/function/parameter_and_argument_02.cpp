#include <iostream>
using namespace std;

void doSomething(int y)
{
    cout << "In func: " << y << " " << &y << "\n";
}

int main()
{
    doSomething(5);

    int x = 6;

    cout << "In main: " << x << " " << &x << "\n";

    // 변수가 전달되는 것이 아니다, argument(값)가 parameter로 전달되어 복사됨
    doSomething(x);
    doSomething(x + 1);
}