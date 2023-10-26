#include<iostream>
#include "my_extern.h"
using namespace std;

extern void doSomething();
int main() {
    cout << "main pi: " << Constants::pi << ", 메모리 주소: " << &Constants::pi << " \n";
    doSomething();

    return 0;
}