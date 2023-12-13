#include<iostream>
// 아래의 방법 사용 시 중복 정의, 컴파일 시간 증가, 의존성 문제, 코드 가독성 감소 등의 단점
// #include "static_global_variable_test.cpp"
using namespace std;

static int s_g_value = 10;
int g_value = 11;
// forward declaration
extern void globalFunction();

int main() {
    cout << "I am main s_g_value: " << s_g_value << "\n";
    cout << "I am main g_value: " << g_value << "\n";
    globalFunction();
    return 0;
}