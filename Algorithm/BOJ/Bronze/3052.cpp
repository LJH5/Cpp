#include <bits/stdc++.h>
using namespace std;

int check_num[42];  // 나머지의 숫자를 확인할 배열, 나머지는 0 ~ 41
unsigned int cnt;   // 서로 다른 수를 저장할 정수

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 10; i++)
    {
        unsigned int num;
        cin >> num;
        // 새로운 숫자의 나머지라면 나머지 숫자에 체크 후 cnt +1
        if(check_num[num % 42] == 0)
        {
            check_num[num % 42]++;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
