#include <iostream>
using namespace std;

int main()
{
    int cnt(0);
    // bool escape_flag = false;

    // while (!escape_flag)
    while (true)
    {
        // ���� ������ while�ȿ� ����ϸ� �������� ������?
        char ch;
        cin >> ch;

        if (ch == 'x')
        {
            // escape_flag = true;
            break;
        }

        cout << ch << " " << cnt++ << "\n";
    }
}