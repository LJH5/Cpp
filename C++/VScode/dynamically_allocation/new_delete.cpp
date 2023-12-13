#include <iostream>
using namespace std;

int main()
{
    // 메모리 동적 할당: os로 부터 메모리 할당받음
    int *ptr = new int{7};

    // 예외처리: 자동으로 nullptr 할당
    int *ptr = new (std::nothrow) int{7};

    cout << ptr << "\n";
    cout << *ptr << "\n";

    // 주의할 점: ptr이 delete되면 같이 사라짐
    int *ptr2 = ptr;

    // 메모리 반납
    delete ptr;

    // 반납하면 nullptr을 넣어주자ㅏ
    ptr = nullptr;

    // 주의할 점
    cout << "After delete" << "\n";
    if (ptr != nullptr)
    {
        cout << ptr << "\n";
        cout << *ptr << "\n";
    }
}