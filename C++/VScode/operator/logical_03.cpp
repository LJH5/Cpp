#include <iostream>
using namespace std;

int main()
{
    bool x = true;
    bool y = false;

    // De Morgan`s Law
    !(x || y);
    !x && !y;
}