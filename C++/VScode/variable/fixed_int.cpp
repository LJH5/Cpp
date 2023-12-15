#include <iostream>
// iostream에 포함되어 있음
// #include <cstdint>

int main()
{
    std::int16_t i(5);
    std::int8_t myint = 65; // 이건 int가 아니라 char이다

    std::cout << myint << "\n";

    std::int_fast8_t fi(5);     // int 타입의 8bit 중 가장 빠른 데이터 타입
    std::int_least64_t fl(5);   // int 타입중 64bit를 가지는 데이터 타입
}