#include <iostream>
using namespace std;

// 함수 선언 시
int add(int x, int y)
{
    return x + y;
}

int main()
{
    // 줄바꿈이 필요할 때 의도적으로 틀린것처럼 보이게 하기
    cout << "Hello  World" << "Hello World" <<
        "Hello World" << "\n";
}