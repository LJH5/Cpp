#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    // 연산자 우선순위를 주의해서 사용, () 사용하자
    cout << ((x % 2 == 0) ? "even" : "odd") << "\n";
    
    // '<<'의 우선순위가 높기 때문에 "odd" << "\n"; 이게 먼저 처리됨
    // cout << (x % 2 == 0) ? "even" : "odd" << "\n";
}