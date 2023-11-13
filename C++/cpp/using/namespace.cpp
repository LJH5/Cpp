#include <iostream>

using namespace std;

namespace mycode {
	void foo()
	{
		cout << "foo() called in the mycode namespace \n";
	}
}

using namespace mycode; // �̰� ���� ���� foo()�� ��� mycode�� foo() ��

int main()
{
	mycode::foo();
	foo();	// mycode::foo(); �� ������ ���
}