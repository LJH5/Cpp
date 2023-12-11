#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void printArray(const array<int, 5> &my_arr)
{
    for (auto element : my_arr)
        cout << element << " ";
    cout << "\n";
}

int main()
{
    array<int, 5> my_arr = {1, 21, 3, 42, 5};

    printArray(my_arr);

    // 정렬
    std::sort(my_arr.begin(), my_arr.end());

    printArray(my_arr);

    // 역순 정렬
    std::sort(my_arr.rbegin(), my_arr.rend());

    printArray(my_arr);
}