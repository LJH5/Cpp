#include <iostream>
using namespace std;

int add(const int& a, const int& b)
{
    return a + b;
}

int main()
{
    int x = 1;

    // 이렇게 사용하면 안됨, 3인줄 알았지만 4나옴
    int v = add(x, ++x);
    cout << v << "\n";

    // 이렇게 사용하면 안됨, ++x를 사용
    x = x++;
    cout << x << "\n";
}