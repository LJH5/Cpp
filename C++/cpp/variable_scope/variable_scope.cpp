#include <iostream>
using namespace std;

int value = 1;

// linker: �������� ������Ʈ ������ �ϳ��� �������Ϸ� ����
extern void doSomething();

int main()
{
    cout << value << "\n";

    int value = 2;

    cout << value << "\n";
    // ���� �����ڸ� �̿��� global������ �ִ� value�� ������
    cout << ::value << "\n";

    // external.cpp ���Ͽ� ����� �Լ��� ���������� �Ѵ�
    doSomething();
}