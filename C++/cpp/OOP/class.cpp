#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Friend : name, address, age, heght, weight, ...

// 사용하기 간편하게 클래스를 만들자!!, 구조체 + 함수 = 클래스
class Friend
{
public: // access specifier(public, private, protected)
    string m_name;  // 멤버 변수임을 나타내기 위해 "m_을 붙임
    string m_address;
    int m_age;
    double m_height;
    double m_weight;

    void print()
    {
        cout << m_name << "  " << m_address << " " << m_age << " " << m_height << " " << m_weight << "\n";
    }
};

void print(const string &name, const string &address, const int &age, const double &height, const double &weight)
{
    cout << name << "  " << address << " " << age << " " << height << " " << weight << "\n";
}

int main()
{
    // 낮은 버전의 c++
    // Friend jj;
    // jj.name = "Jack Jack";
    // jj.address = "seoul";
    // jj.age = 20;
    // jj.height = 170.5;
    // jj.weight = 72.4;
    Friend jj{"Jack Jack", "seoul", 20, 170.5, 72.4}; // 클래스의 instance 만들기, 높은 C++ 버전에서는 이런 형태로 선언 가능

    // print(jj.name, jj.address, jj.age, jj.height, jj.weight);   // 일일이 찍기 귀찮다!!
    jj.print();

    // 생성하기 귀찮다!!!
    // vector<string> name_vec;
    // vector<string> addr_vec;
    // vector<int>    age_vec;
    // vector<double> height_vec;
    // vector<double> weight_vec;
    // print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);

    vector<Friend> my_friends;
    my_friends.resize(2);
    my_friends[0] = {"Lee Jack", "seoul", 18, 187.1, 77.4};

    for (auto &ele : my_friends)
    {
        ele.print();
    }

    return 0;
}