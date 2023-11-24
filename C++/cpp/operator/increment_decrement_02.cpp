#include <iostream>
using namespace std;

int main()
{
    int x = 6, y = 6;
    cout << x << " " << y << "\n";
    cout << ++x << " " << --y << "\n";  // 선증감
    cout << x << " " << y << "\n";
    cout << x++ << " " << y-- << "\n";  // 후증감
    cout << x << " " << y << "\n";

}