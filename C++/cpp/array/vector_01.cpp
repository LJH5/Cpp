#include <iostream>
#include <vector>

using namespace std;

void func(vector<int> &v)
{
	v[4] = 10;
	v.push_back(7); // vector�� �� �ڿ�  �� �߰�
}

int main()
{
	// ���� �Ҵ� �迭�� ��ü
	// vector�� �ڵ����� �޸� ��ü��
	std::vector<int> array;

	// �ʱ�ȭ ���
	// std::vector<int> array {1, 2, 3, 4, 5};
	array = {1, 2, 3, 4, 5};

	// �迭�� ũ�� ��ȯ
	cout << array.size() << "\n";

}