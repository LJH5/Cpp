#include <iostream>
using namespace std;

// tailing �Ǵ� trailing
// auto add(int x, int y) -> int;
// auto add(int x, int y) -> double;

auto add(int x, int y)
{
    return x + y;
}

// �Ʒ� ó���� ����������� ��� template ���
// auto add(auto x, auto y)

// �޼ҵ� �����ε�
auto add(double x, double y)
{
    return x + y;
}

int main()
{
    // �ڷ����� ��Ȳ������ ������ �߷�, �ʱ�ȭ �ʼ�
    auto a = 123;
    auto d = 123.0;
    auto c = 1 + 2.2;
    auto result = add(1, 2);
    auto result2 = add(1.0, 2.0);


}