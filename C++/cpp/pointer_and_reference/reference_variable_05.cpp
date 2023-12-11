#include <iostream>
using namespace std;

int main()
{
    int value = 5;
    // 동일한 역할을 함
    int *const ptr = &value;
    int &ref = value;

    *ptr = 10;
    ref = 10;
}