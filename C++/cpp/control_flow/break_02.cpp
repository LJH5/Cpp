#include <iostream>
using namespace std;

void breakOrReturn()
{
    while (true)
    {
        char ch;
        cin >> ch;

        if (ch == 'b')
        {
            break;
        }

        if (ch == 'r')
        {
            return;
        }
    }

    cout << "hello" << "\n";
}

int main()
{
    breakOrReturn();
}