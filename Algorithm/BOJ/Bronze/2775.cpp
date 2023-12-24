#include <bits/stdc++.h>
using namespace std;

int peopleNum(const int& k, const int& n)
{
    // 1호는 무조건 1명
    if(n == 1)
        return 1;
    // 0층의 n호에는 n명
    else if (k == 0)
        return n;
    // k층 n호는 k층의 (n-1)호 + (k-1)층의 n호
    else
        return (peopleNum(k, n - 1) + peopleNum(k - 1, n));
}

int main(int argc, char const *argv[])
{
    int T, k, n;
    cin >> T;
    while (T--)
    {
        cin >> k >> n;

        cout << peopleNum(k, n) << "\n";
    }

    return 0;
}
