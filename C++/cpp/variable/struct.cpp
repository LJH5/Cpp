#include <iostream>
#include <string>
using namespace std;

// �����͸� �ϳ��� ��ü�� ������
struct Person
{
    double  height;
    float   weight;
    int     age;
    // �ʱ�ȭ�� ����, �⺻�� ����
    string  name = "no name";

    // ����� ������ ����ϴ� �Լ�
    void print()
    {
        cout << height << " " << weight << " " << age << " " << name << "\n";
    }
};
// ����ü�� ����ü
struct Family
{
    Person me, mom, dad;
};
// �Լ� ���ϵ� ����
Person getMe()
{
    Person me{174.3, 70, 20, "jj"};

    return me;
}


int main()
{
    Person me{174.3, 70, 20, "jj"};
    // ���ſ� �ʱ�ȭ ���
    // me.height = 174.3;
    // me.weight = 70;
    // me.age = 20;
    // me.name = "jj";
    me.print();

    // �� ���� ����
    Person me2(me);
    me2.print();

}