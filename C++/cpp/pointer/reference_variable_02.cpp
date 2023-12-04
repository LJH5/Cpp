#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 10;

    int &ref = x;
    cout << ref << "\n";

    // 재할당 가능
    ref = y;
    cout << ref << "\n";

    // const변수에는 const 붙여야함, 값을 변경할 수 없기때문
    const int z = 8;
    const int &ref2 = z;
}