#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    cin >> number;
    // 이런 식으로 상수를 사용하면 마치 변경할 수 있는 것 처럼 사용 가능
    // 사용자의 입력을 받고 값이 할당되기 때문에 런타임에 결정됨
    const int special_number(number);
    // 컴파일 타임에 결정되면 constexpr을 사용
    constexpr int my_number(123);

    return 0;
}
