#include <iostream>
#include "Constants.h"
using namespace std;

// ������ ���������� �̷��� ���� ���� ������ �ʴ´�!!
int g_value = 1;

// forward declaration
extern void testFunction();

int main()
{
    cout << g_value << "\n";

    testFunction();

    int g_value = 123;

    cout << g_value << "\n";

    testFunction();

    // ���������� �̷��� ����ϴ� ���� ����
    cout << "Constants.h: " << Constants::g_value << " " << &Constants::g_value << "\n";

    cout << g_value << "\n";

    return 0;
}