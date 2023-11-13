// �������� ��� ���� �ʱ�ȭ
#include <iostream>
using namespace std;

class B
{
private:
    int m_b;

public:
    B(const int& m_b_in)
        : m_b(m_b_in)
    {

    }
};
class Something
{
private:
    int     m_i = 100;      // �̰����� ������ �ʱ�ȭ�ص� �����ڰ� �켱
    double  m_d = 100.0;    // �����ڿ��� ���ٸ� �̰����� �ʱ�ȭ
    char    m_c;
    int     m_arr[5];
    B       m_b;

public:
    Something()
        // :m_i(1), m_d(3.14), m_c('a')    //  Initializer List
        : m_i{1}, m_c{'a'}, m_arr{1, 2, 3, 4, 5}, m_b(m_i - 1)
    {
        m_c = 'c';  // �����ڿ��� �ʱ�ȭ �� ���⼭ �ٽ� �Ҵ��
    }

    void print()
    {
        cout << m_i << " " << m_d << " " << m_c << "\n";
        for(auto& e:m_arr)
            cout << e << " ";
        cout << "\n";
    }
};

int main()
{
    Something some;
    some.print();

    return 0;
}