#include <bits/stdc++.h>
using namespace std;

int score[1002];
double max_num, num, sum;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        score[i] = num;
        if (num > max_num)
            max_num = num;
    }

    for (int i = 0; i < N; i++)
    {
        sum += (score[i] / max_num * 100);
    }

    cout << sum / N << "\n";

    return 0;
}
