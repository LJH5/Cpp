#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int alpha[26];
    // for(auto &e : alpha)
    // {
    //     e = -1;
    // }
    // fill_n(): 배열 초기화 함수
    std::fill_n(alpha, 26, -1);

    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        int ascii = static_cast<int>(str[i]) - 97;
        if (alpha[ascii] == -1)
        {
            alpha[ascii] = i;
        }
    }

    for(auto &e : alpha)
    {
        cout << e << " ";
    }

    return 0;
}
