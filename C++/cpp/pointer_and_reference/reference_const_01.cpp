#include <iostream>
using namespace std;

// reference를 매개변수로 사용 시
void doSomething(const int& x)
{
    cout << x << "\n";
}

int main()
{
    // 두개의 차의는 무엇일까?
    const int &ref_x = 3 + 4;
    // const int ref_x = 3 + 4;

    cout << ref_x << "\n";
    cout << &ref_x << "\n";

    // 이런 식으로 사용이 가능
    doSomething(1);
    doSomething(1 + 10);
}