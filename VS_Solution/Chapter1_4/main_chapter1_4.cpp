#include <iostream>	// cout, cin, endl, ...
#include <cstdio>	// printf

int main()
{
	// ���� �� �ش� ��� ���� 'std::' ��������
	using namespace std;	

	int x = 1024;
	
	// ���
	std::cout << "cout";
	// ��� �ٹٲ�
	std::cout << "endl" << std::endl;
	std::cout << "\\n \n";
	// ���� ���
	std::cout << "x is " << x << std::endl;
	
	// namespace ���
	cout << "using namespace std\n";

	// ������� ��� ����
	cout << "\a";	

	// �Է�
	cin >> x;
	cout << "�Է� ���ڴ� " << x << "\n";
}