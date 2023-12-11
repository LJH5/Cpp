#include <iostream>
using namespace std;

void def(int x)
{
    x = 10;
    cout << "def(): " << x << " " << &x << "\n";
}

void def2(int &x)
{
    x = 10;
    cout << "def2(): " << x << " " << &x << "\n";
}

// 가장 권장하는 방법, 직접 변경 막아주기
void def3(const int &x)
{
    // x = 10;
    cout << "def2(): " << x << " " << &x << "\n";
}

int main()
{
    int x = 5;
    cout << "main(): " << x << " " << &x <<  "\n";

    def(x);
    // 값 그대로
    cout << "main(): " << x << "\n";

    def2(x);
    // 값 바뀜
    cout << "main(): " << x << "\n";

}