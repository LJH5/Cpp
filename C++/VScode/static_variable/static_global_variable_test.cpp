#include<iostream>
using namespace std;

// extern static int s_g_value; // ���� ���� ������ �ٸ� ���ϰ� �������� ����, extern ��� �Ұ�
// extern int g_value = 123; // �ߺ� ����Ǿ� ���� �߻�
extern int g_value;


void globalFunction() {
	cout << "I am test" << "\n";
	cout << "I am test g_value: " << g_value << "\n";
	// cout << s_g_value << "\n";
}