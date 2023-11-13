#include <iostream>
using namespace std;

int main()
{
    // 변수는 여기서 선언할 것
    int selection;

    do
    {
        // 여기에 선언 시 do 블럭을 벗어나면 변수가 메모리에서 헤제되니까!
        // int selection;
        cout << "1. add\n";
        cout << "2. sub\n";
        cout << "3. mult\n";
        cout << "4. div\n";
        cin >> selection;
    } while (selection <= 0 || selection >= 5); // do while 뒤에 ; 잊지말자!

    cout << "you selected " << selection << "\n";

}