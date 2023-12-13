#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    int y = 10;
    int z = (++x, ++y);
    // ++x;
    // ++y
    // int z = y;

    cout << x << " " << y << " " << z << "\n";
}