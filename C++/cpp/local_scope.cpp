#include <iostream>

using namespace std;

int main()
{
    int x(0); // x = 0;
    cout << x << " " << &x << endl;     // 0 0x7fffc77603a0
    {
        int x = 1;
        cout << x << " " << &x << endl; // 1 0x7fffc77603a4
    }
    {
        int x = 2;
        cout << x << " " << &x << endl; // 2 0x7fffc77603a4
    }
    {
        x = 1;
        cout << x << " " << &x << endl; // 1 0x7fffc77603a0
    }
    cout << x << " " << &x << endl;     // 1 0x7fffc77603a0
    return 0;
}