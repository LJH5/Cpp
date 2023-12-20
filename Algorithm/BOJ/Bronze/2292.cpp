#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    int room_cnt = 1;
    int cut = 1;
    while (true)
    {
        if (n <= cut)
        {
            cout << room_cnt;
            break;
        }
        // 1칸마다 방의 개수는 6의 배수로 증가, 6 -> 12 -> 18 ...
        cut += 6*room_cnt;
        room_cnt++;
    }
    return 0;
}
