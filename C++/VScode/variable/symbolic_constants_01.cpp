#include <iostream>
using namespace std;

// 대부분 함수의 매개변수는 변경하지 않음
void printNumber(const int my_number)
{
    // 변경하고 싶다면 값을 복사
    int n = my_number;
    cout << my_number << "\n";
}

int main(int argc, char const *argv[])
{

    // 고정 데이터를 표현할 때 사용, 반드시 선언과 초기화 같이 진행
    const double gravity{9.8};
    // 이것도 가능하지면 정확히 같은 것은 아니다
    double const gravity{9.8};
    // gravity = 1.2; 재할당 불가능

    printNumber(123);

    return 0;
}
