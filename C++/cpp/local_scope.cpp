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
    // 1κ³? 2? λ©λͺ¨λ¦? μ£Όμκ°? κ°μ?? ?΄? ?
    // 1?΄ ??­? λ²μ΄?λ©΄μ ?€? λ©λͺ¨λ¦¬λ‘ λ°λ©? ?κ³?
    // 2κ°? λ°λ©? λ©λͺ¨λ¦¬λ?? μ°¨μ??????κΈ? ?λ¬Έμ΄?€
    return 0;
}