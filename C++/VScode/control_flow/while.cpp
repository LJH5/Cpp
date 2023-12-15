#include <iostream>
using namespace std;

int main()
{
    cout << "While-loop test\n";

    int count = 0;
    while (count < 10)
    {
        cout << count << "\n";
        ++count;
    }

    // ���ѷ��� ����
    while (1)
    {
        static int count = 0;    // �̰͵� ����!!
        cout << count << "\n";
        ++count;

        if (count == 10) break;
    }

    // ������ ��: �����ϴ� ������ unsigned�� ����ϸ� ���� ����
    unsigned int cnt = 10;
    while (cnt >= 0)
    {
        if (cnt == 0)
            cout << "zero\n";
        else
            cout << cnt << "\n";
        cnt--;
    }
}