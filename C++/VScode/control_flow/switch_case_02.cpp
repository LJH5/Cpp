#include <iostream>
using namespace std;

enum class Colors
{
    BLACK,
    WHITE,
    GREEN,
};

void printColor(Colors color)
{
    // ����ȯ���� �����ϰ� case �����
    switch (static_cast<int>(color))
    {
    case 0:
        cout << "Black\n";
        break;
    case 1:
        cout << "White\n";
        break;
    case 2:
        cout << "Green\n";
        break;
    default:
        break;
    }
}

int main()
{
    printColor(Colors::BLACK);
}