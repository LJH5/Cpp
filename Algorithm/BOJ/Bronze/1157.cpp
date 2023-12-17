#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int alpha[26] {0};
    string str;
    int max = 0;
    int max_cnt = 0;
    int max_idx = 0;

    cin >> str;
    // a ~ z -> 97 ~ 122
    // A ~ Z -> 65 ~ 90
    for(auto &e : str)
    {
        e = (int)e;
        if(97 <= e)
            alpha[e - 97]++;
        else
            alpha[e - 65]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > max)
        {
            max = alpha[i];
            max_idx = i;
        }
    }

    for(auto &e : alpha)
    {
        if(e == max)
            max_cnt++;
    }

    cout << (max_cnt > 1 ? '?' : (char)(max_idx + 65)) << "\n";

}