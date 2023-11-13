#include <iostream>
using namespace std;

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    // Fraction()  // 기본 생성자
    // {
    //     m_numerator = 1;
    //     m_denominator = 1;
    // }

    Fraction(const int& num_in = 2, const int& den_in = 2)  // 기본 생성자를 메소드 오버로딩을 이용해 만든 생성자
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
    // Fraction frac();  // 생성자의 매개변수가 하나도 없으면 () 생략 가능, 함수와 구별하기 위해
    // frac.print();
    Fraction one_thirds{1, 3};  // 타입 변환 허용 안 함, 최신, 엄격
    // Fraction one_thirds(1, 3);  // 타입 변환 허용

    one_thirds.print();

    return 0;
}