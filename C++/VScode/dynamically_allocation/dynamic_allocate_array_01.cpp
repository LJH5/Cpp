#include <iostream>
using namespace std;

int main()
{
    int length;
    cin >> length;

    // 선언 및 초기화
    int *array = new int[length]{1, 2, 3, 4, 5};
    array[0] = 1;

    for (int i = 0; i < length; i++)
    {
        cout << (uintptr_t)&array[i] << "\n";
        cout << array[i] << "\n";
    }

    // new를 사용했으면 delete를 잊지말자
    delete array;
}