#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> Q;
    int N;
    cin >> N;

    // Q에 1부터 순서대로 넣어줌
    for (int i = 1; i < N + 1; i++)
    {
        Q.push(i);
    }

    // Q에 카드가 하나 남을때까지 반복
    while (Q.size() > 1)
    {
        // 버리고
        Q.pop();

        // 밑으로 옮기고
        Q.push(Q.front());
        Q.pop();
    }
    cout << Q.front() << "\n";

    return 0;
}
