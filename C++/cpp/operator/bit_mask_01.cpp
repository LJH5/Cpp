#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;

    unsigned int pixel_color = 0xDAA520;
    cout << bitset<32>(pixel_color) << "\n";

    unsigned char red = pixel_color & red_mask >> 16;
    // char type으로 자리수를 맞추기 위해 right shift
    unsigned char green = pixel_color & green_mask >> 8;
    unsigned char blue = pixel_color & blue_mask;

    cout << "red" << bitset<8>(red) << " " << int(red) << "\n";
    cout << "green" << bitset<8>(green) << " " << int(green) << "\n";
    cout << "blue" << bitset<8>(blue) << " " << int(blue) << "\n";

    return 0;
}