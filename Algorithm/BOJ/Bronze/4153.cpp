#include <iostream>
#include <cmath>        // pow
#include <algorithm>    // sort
using namespace std;

int num[3];

int main(int argc, char const *argv[])
{
    while (1)
    {
        cin >> num[0] >> num[1] >> num[2];
        // a, b, c가 모두 0일때 반복문 멈춤
        if(!(num[0] || num[1] || num[2])) break;

        // 크기순으로 정렬해주자
        sort(num, num + 3);
        if((pow(num[0], 2) + pow(num[1], 2)) == pow(num[2], 2))
            cout << "right" << "\n";
        else
            cout << "wrong" << "\n";
    }

    return 0;
}
