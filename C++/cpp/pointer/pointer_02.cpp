#include <iostream>
#include <typeinfo>

using namespace std;

int* def(int* ptr_a)    // 함수에도 포인터 사용 가능
{
    return nullptr;
}

int main()
{
    int x = 5;

    // 주의: 포인터 변수는 반드시 초기화 시켜줘야 함
    // int *ptr_x;
    int *ptr_x = &x;

    cout << *ptr_x << endl;

    return 0;
}