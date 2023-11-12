#include <iostream>
#include <cstdlib>

int main()
{
    std::cout << "I love you\n";

    // 프로그램 종료, 주로 디버깅할 때 사용
    exit(0);

    // 아래 코드 전 중단하고 싶음
    std::cout << "I love you, too\n";

    // 함수 종료
    return 0;
}