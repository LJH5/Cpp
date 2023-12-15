#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
};


int main()
{
    Person person;
    person.name = "V";
    person.age = 5;

    // 참조
    Person &ref = person;
    ref.age = 15;

    // 참조를 포인터로 가르키기
    Person *ptr = &person;
    ptr->age = 20;
    // (*ptr).age = 20;

    // 포인터가 가르키는 것을 참조
    Person &ref2 = *ptr;
    ref2.age = 45;

    cout << &person << "\n";    // 0x7ffd50ce5410
    cout << &ref2 << "\n";      // 0x7ffd50ce5410

}