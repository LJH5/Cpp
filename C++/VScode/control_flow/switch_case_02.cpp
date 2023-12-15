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
    // 형변환으로 간단하게 case 만들기
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