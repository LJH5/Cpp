#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    // break; ��뿡 ��������
    switch (x)
    {
        // int a;   // ���� ���� ����
        // a = 5;   // ���� �ʱ�ȭ ����
    case 0:
        // int a;   // ���� ���� ����, ������ ������ �Ͱ� ����
        // a = 5;   // ���� �ʱ�ȭ ����
        cout << "Zero\n";
        break;
    case 1:
        cout << "One\n";
        break;
    case 2:
        cout << "Two\n";
        break;
    default:
        cout << "default\n";
        break;
    }
}