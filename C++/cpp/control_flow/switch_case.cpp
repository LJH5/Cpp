#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    // break; 사용에 주의하자
    switch (x)
    {
        // int a;   // 변수 선언 가능
        // a = 5;   // 변수 초기화 블가능
    case 0:
        // int a;   // 변수 선언 가능, 위에서 선언한 것과 같음
        // a = 5;   // 변수 초기화 가능
        cout << "Zero\n";
        break;
    case 1:
        cout << "One\n";
        break;
    case 2:
        cout << "Two\n";
        break;
    default:
        cout << "default\n";
        break;
    }
}