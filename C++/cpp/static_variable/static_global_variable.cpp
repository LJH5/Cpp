#include<iostream>
using namespace std;

static int s_g_value = 10;
int g_value = 11;
// forward declaration
void doSomething();

int main() {
    cout << s_g_value << "\n";
    cout << g_value << "\n";
    doSomething();
    return 0;
}