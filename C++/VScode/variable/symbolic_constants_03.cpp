#include <iostream>
// C 스타일, C++에서는 사용 안함: 디버딩 힘듦, 파일 전체에 영향을 미침
// #define PRICE_PER_ITEM 30
using namespace std;

int main()
{
    // 권장하는 방법
    const int price_per_item = 30;
    int num_item = 123;
    int price = num_item * price_per_item;
}