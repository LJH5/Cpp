#include <iostream>
// define: c ��Ÿ�� ��ũ��, cpp���� ������, ������� ����, ���� ��ü�� ����
#define PRICE_PER_ITEM 30
// ����� ��Ƴ��� ��� ������ ����� ���� ��õ
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