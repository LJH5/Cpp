#include<iostream>
// �Ʒ��� ��� ��� �� �ߺ� ����, ������ �ð� ����, ������ ����, �ڵ� ������ ���� ���� ����
// #include "static_global_variable_test.cpp"
using namespace std;

static int s_g_value = 10;
int g_value = 11;
// forward declaration
extern void doSomething();

int main() {
    cout << s_g_value << "\n";
    cout << g_value << "\n";
    doSomething();
    return 0;
}