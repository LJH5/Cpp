#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    while (true)
    {
        cout << cnt << "\n";
        if (cnt == 10)
        {
            break;
        }

        cnt++;
    }
}