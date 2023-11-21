#include <iostream>
using namespace std;

int main()
{
    int cnt(0);
    // bool escape_flag = false;

    // while (!escape_flag)
    while (true)
    {
        // 변수 선언을 while안에 사용하면 느려지지 않을까?
        char ch;
        cin >> ch;

        if (ch == 'x')
        {
            // escape_flag = true;
            break;
        }

        cout << ch << " " << cnt++ << "\n";
    }
}