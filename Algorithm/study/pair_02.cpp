#include <iostream>
#include <vector>    // vector, pair
#include <algorithm> // sort, pair
using namespace std;

// 전방 선언
bool comp(pair<int, int> a, pair<int, int> b);

int main(int argc, char const *argv[])
{
    // 다음과 같은 방식으로 많이 사용
    vector<pair<int, int>> arr;
    arr.push_back(make_pair(3, 2));
    arr.push_back(make_pair(3, 1));
    arr.push_back(make_pair(1, 3));
    arr.push_back(make_pair(4, 3));

    sort(arr.begin(), arr.end(), comp);

    for(auto& e: arr)
    {
        cout << e.first << " " << e.second << "\n";
    }
    return 0;
}

// first 내림차순, second 오름차순 정렬
bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    else
        return a.first > b.first;
}