#include <iostream>

using namespace std;

namespace mycode {
	void foo()
	{
		cout << "foo() called in the mycode namespace \n";
	}
}

using namespace mycode; // 여기서 부터 foo()는 mycode의 foo()가 된다

int main()
{
	mycode::foo();
	foo();	// mycode::foo();
}