#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "숫자를 입력하세요: ";
    cin >> x;

    if (x > 10)
        cout << "x is greater than 10\n";
    else if (x < 10)
        cout << "x is less than 10\n";
    else
        cout << "x is 10\n";
}