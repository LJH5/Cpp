#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int     m_id;
    string  m_name;

public:
    Student(const string& name_in)
        // : m_id(0), m_name(name_in)   // ���1. �Ȱ��ٸ� ������ �ʱ�ȭ�� �Ѱ������� �ϴ� ���� ����, ���� �� ��
        // : Student(0, name_in)        // ���2. ���� ������, C++11���� ����
    {
        init(0, name_in);               // ���3. �ʱ�ȭ �Լ��� ���� ���, ����
    }

    Student(const int& id_in, const string& name_in)
        : m_id(id_in), m_name(name_in)
    {}

    void init(const int& id_in, const string& name_in)
    {
        m_id = id_in;
        m_name = name_in;
    }

    void print()
    {
        cout << m_id << " " << m_name << " \n";
    }
};

int main()
{
    Student st1(0, "LEE");
    st1.print();

    Student st2("Park");
    st2.print();

    return 0;
}