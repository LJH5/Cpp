//  �Ҹ���
#include <iostream>
using namespace std;

class Simple
{
private:
    int m_id;

public:
    Simple(const int& id_in)
        : m_id(id_in)
    {
        cout << "Construtor " << m_id << "\n";

    }

    ~Simple()
    {
        cout << "Destrutor " << m_id << "\n";
    }
};

int main()
{
    // Simple s1(0);
    Simple *s1 = new Simple(0); // ���� �Ҵ�: ������ ����� �ڵ����� �޸� �ݳ� �ȵ�
    Simple s2(1);

    delete s1;  // ���� �Ҵ�� s1�� �Ҹ��� ȣ��

    return 0;
}