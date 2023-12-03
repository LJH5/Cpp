#include <iostream>
using namespace std;

struct Something
{
    int v1;
    float v2;
};

struct Other
{
    Something st;
};

int main()
{
    Other ot;
    // 아래의 방법은 효율이 떨어짐
    ot.st.v1 = 1.0;

    // 아래 방법을 권장
    int &v1 = ot.st.v1;
    v1 = 1;
}