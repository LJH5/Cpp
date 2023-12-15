#include <iostream>
using namespace std;

void myFunction()
{

}

int main()
{
    // void my_void;        // void는 메모리를 차지하지 않아서 불가능
    int i = 123;
    float f = 123.456f;

    void *my_void;

    // 데이터의 주소를 표현하는 데이터 타입은 동일
    // 주소를 void 타입으로 캐스팅
    my_void = (void*)&i;
    cout << my_void << "\n";
    my_void = (void*)&f;
    cout << my_void << "\n";
}