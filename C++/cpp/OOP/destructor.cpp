//  소멸자
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
    Simple *s1 = new Simple(0); // 동적 할당: 영역을 벗어나도 자동으로 메모리 반납 안됨
    Simple s2(1);

    delete s1;  // 동적 할당된 s1의 소멸자 호출

    return 0;
}