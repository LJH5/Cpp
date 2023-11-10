#include<iostream>
using namespace std;

// extern static int s_g_value; // 정적 전역 변수는 다른 파일과 공유되지 않음, extern 사용 불가
// extern int g_value = 123; // 중복 선언되어 오류 발생
extern int g_value;


void globalFunction() {
	cout << "I am test" << "\n";
	cout << "I am test g_value: " << g_value << "\n";
	// cout << s_g_value << "\n";
}