#include <iostream>
#include <cstddef>

using namespace std;

void def(double *ptr)
{
    // 매개변수로 넘어오는 변수는 재선언 후 복사됨, 메모리주소가 다름
    cout << "def(): " << &ptr << "\n";

    if (ptr != nullptr)
    {
        cout << *ptr << endl;
    }
    else
    {
        cout << "Null Pointer" << endl;
    }
}

int main()
{
    double *ptr{nullptr};

    def(ptr);
    def(nullptr);

    double d = 3.14;
    def(&d);

    ptr = &d;
    def(ptr);

    cout << "main(): " << &d << "\n";

    // 매개변수 중 nullptr만 필요로 할 때 사용
    std::nullptr_t nptr;

    return 0;
}