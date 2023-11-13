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
        // : m_id(0), m_name(name_in)   // 방법1. 똑같다면 생성자 초기화는 한곳에서만 하는 것이 좋다, 권장 안 함
        // : Student(0, name_in)        // 방법2. 위임 생성자, C++11부터 지원
    {
        init(0, name_in);               // 방법3. 초기화 함수를 만들어서 사용, 권장
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