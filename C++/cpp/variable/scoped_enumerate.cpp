// ���� ���� ������
#include <iostream>

int main()
{
    using namespace std;

    // class�� �ٿ��� ������ �� �ֵ��� �Ѵ�
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

    // �ΰ��� 0������ class�� ������
    Color color = Color::RED;
    Fruit fruit = Fruit::BANANA;
}