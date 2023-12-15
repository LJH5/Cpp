#include <iostream>
using namespace std;

// int 타입을 반환하는 함수
int addTwoNumbers(int num_a, int num_b)
{
	int sum = num_a + num_b;

	// 함수에서 함수 호출
	printHelloWorld();

	return sum;
 }

// 반환 값이 없는 함수
void printHelloWorld()
{
	cout << "Hello World!\n";
	
	return;
}

int main()
{
	// 동일한 기능 일일이 반복하기 귀찮아!!!
	//cout << 1 + 1 << "\n";
	//cout << 2 + 2 << "\n";
	cout << addTwoNumbers(1, 1) << "\n";
	cout << addTwoNumbers(2, 2) << "\n";
}
