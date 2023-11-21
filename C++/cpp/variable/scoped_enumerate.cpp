// 영역 제한 열거형
#include <iostream>

int main()
{
    using namespace std;

    // class를 붙여서 구분할 수 있도록 한다
    enum class Color
    {
        RED,
        BLUE,
    };

    enum class Fruit
    {
        BANANA,
        APPLE,
    };

    // 두개다 0이지만 class로 구분함
    Color color = Color::RED;
    Fruit fruit = Fruit::BANANA;
}