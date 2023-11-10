#include <iostream>
using namespace std;

// tailing 또는 trailing
// auto add(int x, int y) -> int;
// auto add(int x, int y) -> double;

auto add(int x, int y)
{
    return x + y;
}

// 아래 처럼은 사용하지말자 대신 template 사용
// auto add(auto x, auto y)

// 메소드 오버로딩
auto add(double x, double y)
{
    return x + y;
}

int main()
{
    // 자료형을 상황에따라 스스로 추론, 초기화 필수
    auto a = 123;
    auto d = 123.0;
    auto c = 1 + 2.2;
    auto result = add(1, 2);
    auto result2 = add(1.0, 2.0);


}