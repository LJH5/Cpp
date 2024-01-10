#include <iostream>
using namespace std;

class Calc
{
private:
    int m_value;

public:
    Calc(int init_value)
        : m_value(init_value)
    {}

    // 자기 자신을 리턴하게 만든다
    Calc& add(int value) { m_value += value; return *this; }
    Calc& sub(int value) { m_value -= value; return *this; }
    Calc& mult(int value) { m_value *= value; return *this; }

    void print()
    {
        cout << m_value << endl;
    }
};

int main(int argc, char const *argv[])
{
    Calc cal(10);

    // cal.add(13);
    // cal.sub(1);
    // cal.mult(2);
    // cal.print();

    // 이런 방식으로 응용이 가능
    cal.add(10).sub(1).mult(2).print();

    return 0;
}
