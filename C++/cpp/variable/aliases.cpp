#include <iostream>
#include <vector>
#include <cstdint>
int main()
{
    using namespace std;
    // 변수의 별명을 붙이기 type을 의미하는 _t를 붙여주는 센스
    typedef double distance_t;

    double      my_distance;
    distance_t  home2work;
    distance_t  home2school;

    // 보기에 불편하다!!
    vector<pair<string, int>> pairlilst;
    typedef vector<pair<string, int>>  pairlilst_t;
    pairlilst_t pairlilst2;

    // 요즘은 using으로 대체
    using pairlilst_t = vector<pair<string, int>>;


}