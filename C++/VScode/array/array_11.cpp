#include <iostream>
using namespace std;

// ���ǻ���: �Ʒ� ������ �ڵ�� ���� �ǹ��̴�, �迭�� ������
// void printArray(int array[])
void printArray(int *array)
{
    cout << sizeof(array) << "\n";  // 8
    cout << *array << "\n";         // 9

    // �Լ� �ȿ��� ���� ����
    *array = 100;
}

int main()
{
    int array[5]{9, 7, 5, 3, 1};

    printArray(array);
    // �Լ� �ȿ��� ���� �����ص� �Լ� �ۿ��� �����
    cout << array[0] << " " << *array << "\n";
}