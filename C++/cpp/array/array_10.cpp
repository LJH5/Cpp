#include <iostream>
using namespace std;

// 주의사항: 아래 두줄의 코드는 같은 의미이다
// void printArray(int array[])
void printArray(int *array)
{
    cout << sizeof(array) << "\n";  // 8
    cout << *array << "\n";         // 9
}

int main()
{
    int array[5]{9, 7, 5, 3, 1};

    cout << array[0] << " " << array[1] << "\n";    // 9, 7
    // 배열은 사실 포인터다, 두개의 주소가 같음
    cout << array << "\n";          // 0x7ffe10158310
    cout << &(array[0]) << "\n";    // 0x7ffe10158310

    cout << *array << "\n";         // 9

    char name[] = "jack";
    cout << *name << "\n";          // j

    cout << sizeof(array) << "\n";  // 20: int는 4bit => 4bit * 5
    int *ptr = array;
    // 포인터 변수 자체의 사이즈, 주소가 차지하는 크기 64bit 운영체제
    cout << sizeof(ptr) << "\n";    // 8

    printArray(array);
    // 포인터 연산
    cout << *ptr << " " << *(ptr + 1) << "\n";
}