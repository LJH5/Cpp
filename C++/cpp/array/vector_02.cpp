#include <iostream>
#include <vector>
using namespace std;

void printArray(const vector<int> &arr)
{
	for(auto &itr : arr)
		cout << itr << " ";
	cout << "\n";
}

int main()
{
	vector<int> arr {1, 2, 3, 4, 5};

	// 배열의 길이 변경
	arr.resize(10);
	printArray(arr);

	// 줄이는 것도 가능
	arr.resize(2);
	printArray(arr);

	cout << arr[1] << "\n";
	cout << arr.at(1) << "\n";

}