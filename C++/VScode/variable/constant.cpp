#include <iostream>
// define: c 스타일 매크로, cpp에서 사용비추, 디버깅이 힘듦, 파일 전체에 영향
#define PRICE_PER_ITEM 30
// 상수를 모아놓은 헤더 파일을 만드는 것을 추천
#include "MY_CONSTANTS.h"

using namespace std;

int main() {
    int num_item = 10;
    int price = num_item * PRICE_PER_ITEM;
    cout << price << "\n";

    double circle_circumference = 2 * constants::pi * 10;
    cout << circle_circumference << "\n";

    return 0;
}