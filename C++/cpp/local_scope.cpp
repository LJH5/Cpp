#include <iostream>

using namespace std;

int main()
{
    int x(0); // x = 0;
    cout << x << " " << &x << endl;     // 0 0x7fffc77603a0
    {
        int x = 1;
        cout << x << " " << &x << endl; // 1 0x7fffc77603a4
    }
    {
        int x = 2;
        cout << x << " " << &x << endl; // 2 0x7fffc77603a4
    }
    {
        x = 1;
        cout << x << " " << &x << endl; // 1 0x7fffc77603a0
    }
    cout << x << " " << &x << endl;     // 1 0x7fffc77603a0
    // 1�? 2?�� 메모�? 주소�? 같�?? ?��?��?�� 
    // 1?�� ?��?��?�� 벗어?��면서 ?��?�� 메모리로 반납?�� ?���?
    // 2�? 반납?�� 메모리�?? 차�???��???�? ?��문이?��
    return 0;
}