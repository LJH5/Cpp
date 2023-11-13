#include <iostream>
using namespace std;

int pow(int base, int exponent)
{
    int result = 1;

    for (int cnt = 0; cnt < exponent; ++cnt)
    {
        result *= base;
    }

    return result;
}

int main()
{
    cout << pow(2, 4) << "\n";

    for (int cnt = 9; cnt >= 0; --cnt)
    {
        cout << cnt << "\n";
    }
}