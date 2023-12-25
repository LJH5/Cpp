#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, num;
    string cmd;
    cin >> N;
    stack<int> S;

    for (int i = 0; i < N; i++)
    {
        cin >> cmd;
        if (cmd == "push")
        {
            cin >> num;
            S.push(num);
        }
        else if (cmd == "top")
        {
            if (S.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << S.top() << "\n";
            }
        }
        else if (cmd == "size")
        {
            cout << S.size() << "\n";
        }
        else if (cmd == "empty")
        {
            if (S.empty())
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        else
        {
            if (S.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << S.top() << "\n";
                S.pop();
            }
        }
    }

    return 0;
}
