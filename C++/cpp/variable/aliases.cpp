#include <iostream>
#include <vector>
#include <cstdint>
int main()
{
    using namespace std;
    // ������ ������ ���̱� type�� �ǹ��ϴ� _t�� �ٿ��ִ� ����
    typedef double distance_t;

    double      my_distance;
    distance_t  home2work;
    distance_t  home2school;

    // ���⿡ �����ϴ�!!
    vector<pair<string, int>> pairlilst;
    typedef vector<pair<string, int>>  pairlilst_t;
    pairlilst_t pairlilst2;

    // ������ using���� ��ü
    using pairlilst_t = vector<pair<string, int>>;


}