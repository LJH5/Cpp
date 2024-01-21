#include <bits/stdc++.h>
using namespace std;

void func1(int n)
{
    if (n == 0) return;
    cout << n << "\n";
    func1(n - 1);

}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    func1(10);

    return 0;
}
