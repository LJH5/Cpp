#include <iostream>
#include <limits>
using namespace std;

int main()
{
    char c1(65);

    cout << sizeof(char) << "\n";
    cout << (int)std::numeric_limits<char>::max() << "\n";
    cout << (int)std::numeric_limits<char>::lowest() << "\n";

    cout << sizeof(unsigned char) << "\n";
    cout << (int)std::numeric_limits<unsigned char>::max() << "\n";
    cout << (int)std::numeric_limits<unsigned char>::lowest() << "\n";

}