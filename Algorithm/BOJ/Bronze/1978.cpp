#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, cnt, num;

void checkPrime(const int& num)
{
    // 2부터 시작하면 2는 걍 통과돼서 cnt + 1
    for (int i = 2; i < num; i++)
    {
        if((num % i) == 0)
            return;
    }
    cnt++;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    cin >> n;

    while (n--)
    {
        cin >> num;
        // 1은 예외처리 해줌
        if (num != 1)
            checkPrime(num);
    }

    cout << cnt << "\n";
}