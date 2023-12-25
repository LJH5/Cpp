#include <bits/stdc++.h>
using namespace std;

char board[50][50];
int result = 64;
void check(const char &start_char, int &c, int &r)
{
    int cnt = 0;
    // 8*8 보드 만들기
    for (int i = c; i < c + 8; i++)
    {
        for (int j = r; j < r + 8; j++)
        {
            // 좌표의 합이 짝수면 시작하는 색과 같아야함
            if ((i + j) % 2 == 0)
            {
                if (board[i][j] != start_char)
                    cnt++;
            }
            else
            {
                if (board[i][j] == start_char)
                    cnt++;
            }
        }
    }
    if (cnt < result)
        result = cnt;
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int c = 0; c < n; c++)
    {
        for (int r = 0; r < m; r++)
        {
            cin >> board[c][r];
        }
    }
    // 탐색 시작점
    for (int i = 0; i < n - 7; i++)
    {
        for (int j = 0; j < m - 7; j++)
        {
            check('B', i, j);
            check('W', i, j);
        }
    }

    cout << result << "\n";
    return 0;
}
