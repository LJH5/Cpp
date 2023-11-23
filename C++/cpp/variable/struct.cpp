#include <iostream>
#include <string>
using namespace std;

// 데이터를 하나의 개체로 묶어줌
struct Person
{
    double  height;
    float   weight;
    int     age;
    // 초기화도 가능, 기본값 설정
    string  name = "no name";

    // 사람의 정보를 출력하는 함수
    void print()
    {
        cout << height << " " << weight << " " << age << " " << name << "\n";
    }
};
// 구조체의 구조체
struct Family
{
    Person me, mom, dad;
};
// 함수 리턴도 가능
Person getMe()
{
    Person me{174.3, 70, 20, "jj"};

    return me;
}


int main()
{
    Person me{174.3, 70, 20, "jj"};
    // 과거에 초기화 방법
    // me.height = 174.3;
    // me.weight = 70;
    // me.age = 20;
    // me.name = "jj";
    me.print();

    // 값 복사 가능
    Person me2(me);
    me2.print();

}