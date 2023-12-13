#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (x == y)
        cout << "equal\n";

    if (x != y)
        cout << "Not equal\n";

    if (x > y)
        cout << "x is greater than y\n";

    if (x < y)
        cout << "x is less than y\n";

    if (x >= y)
        cout << "x is greater than y or equal to y\n";

    if (x <= y)
        cout << "x is less than y or equal  to y\n";
}