#include <iostream>
using namespace std;

int foo(int x, int y);

int foo(int x, int y)   // x, y: parameter
{
    return x + y;
}

int main()
{
    int x = 1, y = 2;

    foo(6, 7); // 6, 7: arguments (actual parameters)
    foo(x, y + 1);
}