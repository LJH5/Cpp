#include <iostream>
using namespace std;

int main()
{
    int cnt(0);

    do
    {
        if (cnt == 5)
        {
            continue;
        }
        cout << cnt << "\n";

    } while (cnt++ < 10);
}