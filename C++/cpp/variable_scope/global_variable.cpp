#include<iostream>
using namespace std;

int value = 123;

int main() {
    cout << value <<"\n";       // 123

    int value = 1;
    cout << ::value << "\n";    // 123, 영역 연산자
    cout << value <<"\n";       // 1

    return 0;
}