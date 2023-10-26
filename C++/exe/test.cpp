#include<iostream>
#include "my_extern.h"
using namespace std;

void doSomething() {
	cout << "test pi: " << Constants::pi << ", 메모리 주소: " << &Constants::pi << " \n";
}