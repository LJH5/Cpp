#include<iostream>
using namespace std;

extern int s_g_value; // ���� ���� ������ �ٸ� ���ϰ� �������� ����
extern int g_value;

void doSomething() {
	cout << "hello" << "\n";
	cout << g_value << "\n";
	cout << s_g_value << "\n";
}