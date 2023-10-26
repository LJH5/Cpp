#include<iostream>
using namespace std;

static int g_value = 10;
// forward declaration
void doSomething();

int main() {
    cout << g_value << "\n";
    doSomething();
    return 0;
}