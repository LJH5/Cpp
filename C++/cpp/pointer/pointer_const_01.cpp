#include <iostream>
using namespace std;

int main()
{
    // 변수가 const가 아니라도 가능
    int value1 = 5;
    const int *ptr1 = &value1;
    int *const ptr2 = &value1;
    const int *const ptr3 = &value1;

    int value2 = 9;

    // 각각의 특징을 비교해보자!
    // 주소의 값을 재할당
    // *ptr1 = 1;
    *ptr2 = 1;
    // *ptr3 = 1;

    // 주소를 재할당
    ptr1 = &value2;
    // ptr2 = &value2;
    // ptr3 = &value2;

    cout << *ptr1 << " " << *ptr2 << " " << *ptr3 << "\n";

}