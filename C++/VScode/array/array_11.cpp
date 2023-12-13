#include <iostream>
using namespace std;

// 주의사항: 아래 두줄의 코드는 같은 의미이다, 배열은 포인터
// void printArray(int array[])
void printArray(int *array)
{
    cout << sizeof(array) << "\n";  // 8
    cout << *array << "\n";         // 9

    // 함수 안에서 값을 변경
    *array = 100;
}

int main()
{
    int array[5]{9, 7, 5, 3, 1};

    printArray(array);
    // 함수 안에서 값을 변경해도 함수 밖에서 적용됨
    cout << array[0] << " " << *array << "\n";
}