#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    else
        return a.first < b.first;
}

int main(int argc, char const *argv[])
{
    int N, f, s;
    cin >> N;
    vector<pair<int, int>> pair_list(N);
    for (int i = 0; i < N; i++)
    {
        cin >> f >> s;
        pair_list[i].first = f;
        pair_list[i].second = s;
    }

    sort(pair_list.begin(), pair_list.end(), comp);

    for(auto& e : pair_list)
    {
        cout << e.first << " " << e.second << "\n";
    }
    return 0;
}

