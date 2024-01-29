#include <bits/stdc++.h>
using namespace std;

int n, m, b;
int max_height = INT_MIN;
int min_time = INT_MAX;
int lend[250001];

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> b;
    for (int i = 0; i < n * m; i++)
    {
        cin >> lend[i];
    }

    // 블록의 높이는 0 ~ 256
    for (int height = 0; height <= 256; height++)
    {
        int remove_block_num = 0;
        int pile_block_num = 0;
        for (int i = 0; i < n * m; i++)
        {
            // 쌓기
            if (lend[i] < height)
            {
                pile_block_num += (height - lend[i]);
            }
            // 제거
            else if (lend[i] > height)
            {
                remove_block_num += (lend[i] - height);
            }
        }
        // 쌓기위해서는 제거 블럭 수 + 인벤토리 블럭 수를 확인
        if (remove_block_num + b >= pile_block_num)
        {
            // 제거는 2초, 쌓기는 1초
            int time = remove_block_num * 2 + pile_block_num;
            if (min_time >= time)
            {
                min_time = time;
                max_height = height;
            }
        }
    }

    cout << min_time << " " << max_height;

    return 0;
}
