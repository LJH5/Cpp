#include <iostream>
#include <vector>

using namespace std;

void func(vector<int> &v)
{
	v[4] = 10;
	v.push_back(7); // vector의 맨 뒤에  값 추가
}

int main()
{
	// 동적 할당 배열을 대체
	// vector는 자동으로 메모리 해체함
	std::vector<int> array;

	// 초기화 방법
	// std::vector<int> array {1, 2, 3, 4, 5};
	array = {1, 2, 3, 4, 5};

	// 배열의 크기 반환
	cout << array.size() << "\n";

}