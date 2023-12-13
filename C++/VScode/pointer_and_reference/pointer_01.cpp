#include <iostream>
#include <typeinfo>

using namespace std;

int* def(int* ptr_a)    // 함수에도 포인터 사용 가능
{
    return nullptr;
}

int main()
{
    int x = 5;  // 변수를 선언한다는 것은 os에서 메모리 공간을 빌리는 것, 주소를 이용
    double d = 1.0;

    cout << &x << endl;     // &: adress-of operator. 메모리 주소를 가르킴
    cout << *&x << endl;    // *: de-reference operator, 메모리 주소에 직접 접근해 값을 확인
    cout << x << endl;      // 위에랑 똑같은 것임

    // 포인터: 메모리 주소를 담는 변수, 포인터도 데이터 타입이 필요함
    int *ptr_x = &x;
    double *ptr_d = &d;

    cout << ptr_x << endl;  // 주소를 가르킴
    cout << *ptr_x << endl; // 주소에 저장된 값을 가르킴
    cout << typeid(ptr_x).name() << endl;   // Pi: pointer to inteager

    cout << ptr_d << endl;
    cout << *ptr_d << endl;

    // 포인터 변수 자체의 크기는 운영체제에 따라 달라질 뿐 변수의 크기와 상관없음
    cout << sizeof(&x) << " " << sizeof(ptr_x) << " \n";
    cout << sizeof(&d) << " " << sizeof(ptr_d) << " \n";

    return 0;
}