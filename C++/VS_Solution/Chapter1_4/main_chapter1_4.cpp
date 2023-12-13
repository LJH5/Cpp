#include <iostream>	// cout, cin, endl, ...
#include <cstdio>	// printf

int main()
{
	// 선언 시 해당 블록 내에 'std::' 생략가능
	using namespace std;	

	int x = 1024;
	
	// 출력
	std::cout << "cout";
	// 출력 줄바꿈
	std::cout << "endl" << std::endl;
	std::cout << "\\n \n";
	// 변수 출력
	std::cout << "x is " << x << std::endl;
	
	// namespace 사용
	cout << "using namespace std\n";

	// 오디오도 출력 가능
	cout << "\a";	

	// 입력
	cin >> x;
	cout << "입력 숫자는 " << x << "\n";
}