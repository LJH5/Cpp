#include<iostream>
using namespace std;

void doSomething() {
    // int a = 1;       // 함수가 실행할 때마다 선언 및 초기화 실행
    static int a = 1;   // 함수가 최초 한번만 선언 및 초기화 실행
    ++a;
    cout << a << "\n";
}

int main() {
    // static 선언 전 / 후 비교
    doSomething();  // 2 / 2
    doSomething();  // 2 / 3
    doSomething();  // 2 / 4

    return 0;
}