#include<iostream>
using namespace std;

void doSomething() {
    // int a = 1;       // �Լ��� ������ ������ ���� �� �ʱ�ȭ ����
    static int a = 1;   // �Լ��� ���� �ѹ��� ���� �� �ʱ�ȭ ����
    ++a;
    cout << a << "\n";
}

int main() {
    // static ���� �� / �� ��
    doSomething();  // 2 / 2
    doSomething();  // 2 / 3
    doSomething();  // 2 / 4

    return 0;
}