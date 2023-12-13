#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s, c;
        int r;
        cin >> r >> s;

        for (int j = 0; j < s.length(); j++)
        {
            for (int z = 0; z < r; z++)
            {
                cout << s[j];
            }
        }

        cout << "\n";
    }

    return 0;
}
