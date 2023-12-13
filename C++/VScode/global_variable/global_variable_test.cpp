#include <iostream>
#include "Constants.h"
using namespace std;

extern int g_value;

void testFunction()
{
    cout << "test: " << g_value << "\n";
    cout << "test Constants.h: " << Constants::g_value << " " << &Constants::g_value << "\n";
}