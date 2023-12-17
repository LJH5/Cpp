#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int result = 0;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        int sum = 0;
        int num = i;
        while (num)
        {
            sum += (num % 10);
            num /= 10;
        }
        if (sum + i == n)
        {
            result = i;
            break;
        }
    }
    cout << result;
}