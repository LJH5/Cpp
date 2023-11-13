#include <iostream>
#include <typeinfo>

// �Ʒ��� ���� �Լ��� �����ϸ� �����ڰ� weapon_id�� �ܿ����ϴ� �һ��
// int computeDMG(int weapon_id)
// {
//     if (weapon_id == 0) // sword
//     {
//         return 1;
//     }
//     if (weapon_id == 0) // bow
//     {
//         return 2;
//     }
// }

// enumerated type: ����� ���� �ڷ���
enum Color
{
    // ��� ���� �� �ٸ� enum�� �̸��� ��ġ���� ���� ������
    COLOR_BLACK,
    COLOR_RED,
    // �������� �Ҵ� �Ҷ� ����!!
    COLOR_BLUE = -2,
    COLOR_GREEN,
    COLOR_YELLOW,
};  // ���� ";" ��������

int main()
{
    using namespace std;

    Color paint = COLOR_BLACK;
    Color apple{COLOR_RED};
    Color house(COLOR_BLUE);

    // 1�� �����Ѵٴ� ���� ��������
    // cout << paint << "\n";          // 0    �⺻ ������ 0����
    // cout << COLOR_RED << "\n";      // 1
    // cout << COLOR_BLUE << "\n";     // -2   -2�� ����
    // cout << COLOR_GREEN << "\n";    // -1
    // cout << COLOR_YELLOW << "\n";   // 0    COLOR_BLACK�� COLOR_YELLOW�� ���� ���� ��

    // ���� Ÿ���� int�� �ƴ��� ��������
    cout << typeid(COLOR_BLACK).name() << "\n"; // 5Color: 5�� ��������?
}