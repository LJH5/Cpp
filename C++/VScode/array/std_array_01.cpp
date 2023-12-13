#include <iostream>
#include <array>
using namespace std;

// 매개 변수로 넣어도 원래 성질 유지
void printLength(const array <int, 5>& my_arr)
{
    cout << my_arr.size() << "\n";
}

int main()
{
    // 정적 할당 배열을 대체
    // int my_array[] = {1, 2, 3, 4, 5};

    // 사이즈를 반드시 넣어야 함
    array<int, 5> my_arr;

    // 초기화 방법
    // array<int, 5> my_arr {0, 1, 2, 3, 4};
    my_arr = {0, 1, 2, 3, 4};

    // 나머지는 0으로 채워줌
    my_arr = {0, 1, 2, };

    // 미리 확인 안 함, 조금 더 빠름
    cout << my_arr[10] << "\n";

    // 배열을 미리 확인하고 예외처리 후 알려줌
    // cout << my_arr.at(10) << "\n";

    // 배열의 크기 반환
    cout << my_arr.size() << "\n";

}