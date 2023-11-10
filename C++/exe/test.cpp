#include<iostream>
#include "my_extern.h"
using namespace std;

void doSomething() {
	cout << "test pi: " << Constants::pi << ", ??? ???: " << &Constants::pi << " \n";
}