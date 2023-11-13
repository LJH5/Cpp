#include <iostream>
using namespace std;

int main()
{
    cout << "While-loop test\n";

    int count = 0;
    while (count < 10)
    {
        cout << count << "\n";
        ++count;
    }

    // 무한루프 중지
    while (1)
    {
        static int count = 0;    // 이것도 가능!!
        cout << count << "\n";
        ++count;

        if (count == 10) break;
    }

    // 주의할 점: 감소하는 로직에 unsigned를 사용하면 무한 루프
    unsigned int cnt = 10;
    while (cnt >= 0)
    {
        if (cnt == 0)
            cout << "zero\n";
        else
            cout << cnt << "\n";
        cnt--;
    }
}