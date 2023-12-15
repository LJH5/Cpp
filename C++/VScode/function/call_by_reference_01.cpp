#include <iostream>
using namespace std;

// 참조에 의한 인수 전달
void addOne(int &y)
{
    cout << y << " " << &y << "\n";     // 5 0x7ffd5bb32834
    ++y;

}

int main()
{
    int x(5);

    cout << x << " " << &x << "\n";     // 5 0x7ffd5bb32834

    addOne(x);

    cout << x << " " << &x << "\n";     // 6 0x7ffd5bb32834
}