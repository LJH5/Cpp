#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;
    // opt4, opt5, ...

    cout << bitset<8>(opt0) << "\n";
    cout << bitset<8>(opt1) << "\n";
    cout << bitset<8>(opt2) << "\n";
    cout << bitset<8>(opt3) << "\n";

    /* 비효율적인 사용방법
    bool item1_flag = false;
    bool item2_flag = false;
    bool item3_flag = false;
    bool item4_flag = false;
    ...
    */

    unsigned char items_flag = 0;
    cout << "No item " << bitset<8>(items_flag) << "\n";

    // get item0
    items_flag |= opt0;
    cout << "get item0 " << bitset<8>(items_flag) << "\n";

    // get item3
    items_flag |= opt3;
    cout << "get item3 " << bitset<8>(items_flag) << "\n";

        // lost item3
    items_flag &= ~opt3;
    cout << "lost item3 " << bitset<8>(items_flag) << "\n";

    // check item1
    if (items_flag   & opt1)
    {
        cout << "has item1" << "\n";
    }
    else
    {
        cout << "doesn't have item1" << "\n";
    }

    // check item0
    if (items_flag & opt0)
    {
        cout << "has item0" << "\n";
    }
    else
    {
        cout << "doesn't have item0" << "\n";
    }

    // get item2, 3
    items_flag |= (opt2 | opt3);
    cout << "get item2, 3 " << bitset<8>(items_flag) << "\n";

    // chage item2 -> item1
    if ((items_flag & opt2) && !(items_flag & opt1))
    {
        items_flag ^= opt2;
        items_flag ^= opt1;
    }

    return 0;
}