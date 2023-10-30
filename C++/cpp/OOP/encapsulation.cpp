#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date
{
private:        // access specifier, 기본적으로 private
    int m_year;
    int m_month;
    int m_day;

public:         // access function
    void setDate(const int& year_input,
        const int& month_input, const int& day_input)   // setters
    {
        m_year = year_input;
        m_month = month_input;
        m_day = day_input;
    }

    const int& getDay() // getters
    {
        return m_day;
    }

    void copyFrom(const Date& original)
    {
        m_year = original.m_year;   // 같은 클래스라면 멤버 변수에 접근이 가능함
        m_month = original.m_month;
        m_day = original.m_day;

    }
};

int main()
{
    Date today;
    /*
    today.m_year = 2077;    // private는 외부에서 접근 불가능
    today.m_day = 30;
    today.m_month = 10;
    */
    today.setDate(2077, 10, 30);
    cout << today.getDay() << "\n";

    Date copy;
    copy.copyFrom(today);

    return 0;
}
