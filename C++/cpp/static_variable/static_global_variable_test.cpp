#include<iostream>
using namespace std;

extern int s_g_value; // 정적 전역 변수는 다른 파일과 공유되지 않음
extern int g_value;

void doSomething() {
	cout << "hello" << "\n";
	cout << g_value << "\n";
	cout << s_g_value << "\n";
}