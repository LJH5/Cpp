#include <iostream>
using namespace std;

// ���ǻ���: �Ʒ� ������ �ڵ�� ���� �ǹ��̴�
// void printArray(int array[])
void printArray(int *array)
{
    cout << sizeof(array) << "\n";  // 8
    cout << *array << "\n";         // 9
}

int main()
{
    int array[5]{9, 7, 5, 3, 1};

    cout << array[0] << " " << array[1] << "\n";    // 9, 7
    // �迭�� ��� �����ʹ�, �ΰ��� �ּҰ� ����
    cout << array << "\n";          // 0x7ffe10158310
    cout << &(array[0]) << "\n";    // 0x7ffe10158310

    cout << *array << "\n";         // 9

    char name[] = "jack";
    cout << *name << "\n";          // j

    cout << sizeof(array) << "\n";  // 20: int�� 4bit => 4bit * 5
    int *ptr = array;
    // ������ ���� ��ü�� ������, �ּҰ� �����ϴ� ũ�� 64bit �ü��
    cout << sizeof(ptr) << "\n";    // 8

    printArray(array);
    // ������ ����
    cout << *ptr << " " << *(ptr + 1) << "\n";
}