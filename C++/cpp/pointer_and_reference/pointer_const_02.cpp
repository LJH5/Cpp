#include <iostream>
using namespace std;

int main()
{
    // 변수를 const로 선언 시 포인터 변수는 반드 시 const
    const int value = 5;
    const int *ptr = &value;
    // 할당은 불가능
    // *ptr = 6;
    // value = 5;

    cout << *ptr << "\n";

}