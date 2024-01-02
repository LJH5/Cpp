#include <iostream>
#include <utility>
using namespace std;

int main(int argc, char const *argv[])
{
    pair <int, int> p;
    pair <string, double> p2;

    // 초기화 방법
    pair <int, double> p3(1, 1.2);
    p.first = 1;
    p.second = 2;
    p2 = make_pair("pair", 5.5);

    cout << "first: " << p.first << ", second: " << p.second << "\n";
    cout << "first: " << p2.first << ", second: " << p2.second << "\n";

    return 0;
}
