#include <iostream>
using namespace std;

int main()
{
    // 이렇게도 사용이 가능하지
    for (int i = 0, j = 0; (i + j) < 10; i++, j++)
    {
        cout << i << " " << j << "\n";
    }
}
