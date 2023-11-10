#include <iostream>
using namespace std;

int value = 1;

// linker: 여러개의 오브젝트 파일을 하나의 실행파일로 연결
extern void doSomething();

int main()
{
    cout << value << "\n";

    int value = 2;

    cout << value << "\n";
    // 영역 연산자를 이용해 global영역에 있는 value를 가져옴
    cout << ::value << "\n";

    // external.cpp 파일에 선언된 함수를 가져오려고 한다
    doSomething();
}