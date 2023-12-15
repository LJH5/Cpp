#include <iostream>
using namespace std;

int main()
{
    // 정적 할당: 컴파일 시점에 메모리 할당, 메모리 해체 자동
    int fixedArray[]{1, 2, 3, 4, 5};

    // 동적 할당: 실행 시점에 메모리 할당, 메모리 해체 사용자가 직접
    int *array = new int[3]{1, 2, 3};

    delete[] array;
}