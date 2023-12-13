#include <iostream>
using namespace std;

int main()
{
    // for (int  cnt = 0; cnt < 10; ++cnt) // iteration: 반복문
    // 반복문이 끝나도 cnt 변수를 사용하고 싶다면!!
    int cnt = 0;
    for (; cnt < 10; cnt++)
    {
        cout << cnt << "\n";
    }
    cout << cnt << "\n";
}