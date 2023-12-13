#include <iostream>
using namespace std;

int main()
{
    bool onSale = true;
    // 복잡할 때는 사용하지
    const int price = (onSale == true) ? 10 : 100;

    // 아래는 prince를 const로 선언할 수 없음
    // if (onSale)
    // {
    //     price = 10;
    // }
    // else
    // {
    //     price = 100;
    // }

    cout << price << "\n";
}