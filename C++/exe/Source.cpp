#include<iostream>
#include "my_extern.h"
using namespace std;

extern void doSomething();
int main() {
    cout << "main pi: " << Constants::pi << ", �޸� �ּ�: " << &Constants::pi << " \n";
    doSomething();

    return 0;
}