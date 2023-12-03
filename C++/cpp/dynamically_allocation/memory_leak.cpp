#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        // 종종하는 실수
        int *ptr = new int;
        cout << ptr << "\n";
    }
}