#include <bits/stdc++.h>
using namespace std;

string str;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    // test case 만큼 반복
    while (t--)
    {
        // 그 문제의 점수
        int point = 0;
        // 총 점수
        int total_point = 0;
        cin >> str;
        for (int i = 0; i < str.length(); i++)
        {
            // 정답
            if (str[i] == 'O')
            {
                // 그 문제 점수 + 1(연속 정답인 경우 점수가 누적되도록 함)
                point++;
                // 총 점수에 그 문제의 점수를 더해줌
                total_point += point;
            }
            // 오답
            else
            {
                // 그 문제의 점수는 0(점수가 0으로 초기화 됨)
                point = 0;
            }
        }
        cout << total_point << "\n";
    }

    return 0;
}