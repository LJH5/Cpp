#include <iostream>
#include <typeinfo>

// 아래와 같이 함수를 정의하면 개발자가 weapon_id를 외워야하는 불상사
// int computeDMG(int weapon_id)
// {
//     if (weapon_id == 0) // sword
//     {
//         return 1;
//     }
//     if (weapon_id == 0) // bow
//     {
//         return 2;
//     }
// }

// enumerated type: 사용자 정의 자료형
enum Color
{
    // 상수 선언 시 다른 enum과 이름이 겹치지는 것을 피하자
    COLOR_BLACK,
    COLOR_RED,
    // 수동으로 할당 할때 주의!!
    COLOR_BLUE = -2,
    COLOR_GREEN,
    COLOR_YELLOW,
};  // 여기 ";" 잊지말자

int main()
{
    using namespace std;

    Color paint = COLOR_BLACK;
    Color apple{COLOR_RED};
    Color house(COLOR_BLUE);

    // 1씩 증가한다는 것을 주의하자
    // cout << paint << "\n";          // 0    기본 시작은 0부터
    // cout << COLOR_RED << "\n";      // 1
    // cout << COLOR_BLUE << "\n";     // -2   -2로 선언
    // cout << COLOR_GREEN << "\n";    // -1
    // cout << COLOR_YELLOW << "\n";   // 0    COLOR_BLACK과 COLOR_YELLOW가 같은 값이 됨

    // 변수 타입이 int가 아님을 주의하자
    cout << typeid(COLOR_BLACK).name() << "\n"; // 5Color: 5는 뭔뜻이지?
}