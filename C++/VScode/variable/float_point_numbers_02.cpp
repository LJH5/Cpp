#include <iostream>
// ����� �ڸ��� ����
#include <iomanip>
using namespace std;

int main()
{
    cout << 1.0 / 3.0 << "\n";
    cout << std::setprecision(16);
    cout << 1.0 / 3.0 << "\n";

    float f(123456789.0f);
    cout << std::setprecision(9);
    // 123456792�� ������ �߻��Ѵ�
    cout << f << "\n";

    double d(0.1);
    cout << d << "\n";
    cout << std::setprecision(17);
    // ������ �߻�, ���� ����� ���� ǥ���һ� ��Ȯ�� ���� �ƴϴ�
    cout << d << "\n";
}