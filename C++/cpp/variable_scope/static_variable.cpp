#include <iostream>
using namespace std;

// static���� ����� global ������ �ٸ� ���Ͽ��� ����� �� ����
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
    // static���� ����Ǳ� �� -> ��
    doSomething();  // 1 -> 1
    doSomething();  // 1 -> 2
    doSomething();  // 1 -> 3
}