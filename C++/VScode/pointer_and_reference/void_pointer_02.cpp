#include <iostream>
using namespace std;

enum Type
{
    INT,
    DOUBLE,
};

int main()
{
    int i = 5;
    double d = 3.5;

    void *ptr = nullptr;
    ptr = &d;

    // 예전에는 이렇게까지 사용함
    Type type = DOUBLE;

    if (type == DOUBLE)
    {
        cout << *static_cast<double*>(ptr) << "\n";
    }
    else if (type == INT)
    {
        cout << *static_cast<int*>(ptr) << "\n";
    }
}