// 멀티 클래스
#include <iostream>
using namespace std;

class Second
{
public:
    Second()
    {
        cout << "class Second constructor()" << "\n";
    };
};

class First
{
    Second sec;

public:
    First()
    {
        cout << "class Frist constructor()" << "\n";
    }
};


int main()
{
    First fir;

    return 0;
}