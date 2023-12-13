#include <iostream>
using namespace std;

struct MyStruct
{
    int array[5]{9, 7, 5, 3, 1};
};

// struct를 매개변수로 넣으면 어떻게 될까? -> 배열과 마찬가지
void printArray(MyStruct ms)
{
    cout << "printArray: " << ms.array << "\n";
    cout << sizeof(ms.array) << "\n";
}

int main()
{
    MyStruct ms;
    cout << "main: " << ms.array << "\n";
    cout << ms.array[0] << "\n";
    cout << sizeof(ms.array) << "\n";

    printArray(ms);
}