#include <iostream>
using namespace std;

int main()
{
    int array[]{9, 7, 5, 3, 1};

    for (const auto &i : array)
    {
        // uintptr_t: unsigned int pointer 형변환
        // int는 4byte라서 주소값이 4씩 증가한다
        cout << i << " " << (uintptr_t)&i << "\n";
    }
}