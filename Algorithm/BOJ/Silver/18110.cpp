#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, num, cut;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << "\n";
        return 0;
    }
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        vec[i] = num;
    }
    // STL 정렬
    sort(vec.begin(), vec.end());

    // 반올림
    cut = round(n * 0.15);
    double sum;

    for (int i = cut; i < n - cut; i++)
    {
        sum += vec[i];
    }

    cout << round(sum / (n - 2 * cut)) << "\n";
}
