#include <iostream>
using namespace std;

// int Ÿ���� ��ȯ�ϴ� �Լ�
int addTwoNumbers(int num_a, int num_b)
{
	int sum = num_a + num_b;

	// �Լ����� �Լ� ȣ��
	printHelloWorld();

	return sum;
 }

// ��ȯ ���� ���� �Լ�
void printHelloWorld()
{
	cout << "Hello World!\n";
	
	return;
}

int main()
{
	// ������ ��� ������ �ݺ��ϱ� ������!!!
	//cout << 1 + 1 << "\n";
	//cout << 2 + 2 << "\n";
	cout << addTwoNumbers(1, 1) << "\n";
	cout << addTwoNumbers(2, 2) << "\n";
}
