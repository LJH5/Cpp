#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string str;
    int idx;

    cin >> str;

    // c++ stream을 이용
    // .find(): 요소가 포함되어 있는지 확인 후 index를 반환
    // 요소가 없으면 unsigned int 형의 -1이라 양수 최대값으로 표현됨
    // int 형변환을 이용해 -1로 변경
    for(auto &e : alpha)
        cout << static_cast<int>(str.find(e)) << " ";

    return 0;
}
