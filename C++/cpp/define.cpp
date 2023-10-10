#include <iostream>

#define PRICE_PER_ITEM 30

using namespace std;

int main() {
    int num_item = 10;
    int price = num_item * PRICE_PER_ITEM;
    cout << price << "\n";

    return 0;
}