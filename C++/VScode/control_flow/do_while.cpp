#include <iostream>
using namespace std;

int main()
{
    // ������ ���⼭ ������ ��
    int selection;

    do
    {
        // ���⿡ ���� �� do ���� ����� ������ �޸𸮿��� �����Ǵϱ�!
        // int selection;
        cout << "1. add\n";
        cout << "2. sub\n";
        cout << "3. mult\n";
        cout << "4. div\n";
        cin >> selection;
    } while (selection <= 0 || selection >= 5); // do while �ڿ� ; ��������!

    cout << "you selected " << selection << "\n";

}