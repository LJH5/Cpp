// 생성자의 멤버 변수 초기화
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
    int     m_i = 100;      // 이곳에서 변수를 초기화해도 생성자가 우선
    double  m_d = 100.0;    // 생성자에서 없다면 이곳에서 초기화
    char    m_c;
    int     m_arr[5];
    B       m_b;

public:
    Something()
        // :m_i(1), m_d(3.14), m_c('a')    //  Initializer List
        : m_i{1}, m_c{'a'}, m_arr{1, 2, 3, 4, 5}, m_b(m_i - 1)
    {
        m_c = 'c';  // 생성자에서 초기화 후 여기서 다시 할당됨
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