#include<iostream>
using namespace std;

int value = 123;

int main() {
    cout << value <<"\n";       // 123

    int value = 1;
    cout << ::value << "\n";    // 123, ���� ������
    cout << value <<"\n";       // 1

    return 0;
}