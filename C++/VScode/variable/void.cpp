#include <iostream>
using namespace std;

void myFunction()
{

}

int main()
{
    // void my_void;        // void�� �޸𸮸� �������� �ʾƼ� �Ұ���
    int i = 123;
    float f = 123.456f;

    void *my_void;

    // �������� �ּҸ� ǥ���ϴ� ������ Ÿ���� ����
    // �ּҸ� void Ÿ������ ĳ����
    my_void = (void*)&i;
    cout << my_void << "\n";
    my_void = (void*)&f;
    cout << my_void << "\n";
}