#include <iostream>
using namespace std;

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    // Fraction()  // �⺻ ������
    // {
    //     m_numerator = 1;
    //     m_denominator = 1;
    // }

    Fraction(const int& num_in = 2, const int& den_in = 2)  // �⺻ �����ڸ� �޼ҵ� �����ε��� �̿��� ���� ������
    {
        m_numerator = num_in;
        m_denominator = den_in;
        cout << "Fraction() constructor" << "\n";
    }

    void print()
    {
        cout << m_numerator << " / " << m_denominator << "\n";
    }
};

int main()
{
    // Fraction frac();  // �������� �Ű������� �ϳ��� ������ () ���� ����, �Լ��� �����ϱ� ����
    // frac.print();
    Fraction one_thirds{1, 3};  // Ÿ�� ��ȯ ��� �� ��, �ֽ�, ����
    // Fraction one_thirds(1, 3);  // Ÿ�� ��ȯ ���

    one_thirds.print();

    return 0;
}