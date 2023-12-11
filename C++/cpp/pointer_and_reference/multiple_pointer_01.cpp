#include <iostream>
using namespace std;

int main()
{
    int *ptr = nullptr;
    // 이중 포인터
    int **ptrptr = nullptr;

    int value = 5;

    ptr = &value;
    ptrptr = &ptr;

    cout << ptr << " " << *ptr << " " << &ptr << "\n";
    cout << ptrptr << " " << *ptrptr << " " << &ptrptr << "\n";
    cout << **ptrptr << "\n";

}