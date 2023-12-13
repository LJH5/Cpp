#include <iostream>
using namespace std;

int getInt()
{
    while (true)
    {
        /* code */
        cout << "Enter an integer number: " << "\n";
        int x;
        cin >> x;
        // 입력 실패 시(변수의 범위를 벗어나는 등)
        if (std::cin.fail())
        {
            // clear(): 입력 실패 시 오류 삭제해 재입력 할수있도록 함
            std::cin.clear();
            std::cin.ignore(99999, '\n');
            cout << "Invalid number, please try again" << "\n";
        }
        else
        {
            // ignore(n, cn): 버퍼 지우기, n은 개수(음수면 무한정), cn은 문자의 종류(미지정 시 모든 문자)
            std::cin.ignore(99999, '\n');
            return x;
        }
    }
}

char getOperator()
{
    // 제대로 입력할때까지 무한 입력
    while (true)
    {
        cout << "Enter an operator (+, -) : " << "\n";
        char op;
        cin >> op;
        std::cin.ignore(99999, '\n');

        if (op == '+' || op == '-')
        {
            return op;
        }
        else
        {
            cout << "Invalid operator, please try again" << "\n";
        }

        return op;
    }
}

void printResult(int x, char op, int y)
{
    if (op == '+')
    {
        cout << x + y << "\n";
    }
    else if (op == '-')
    {
        cout << x - y << "\n";
    }
    else
    {
        cout << "Invalid operator"
             << "\n";
    }
}

int main()
{
    int x = getInt();
    char op = getOperator();
    int y = getInt();

    printResult(x, op, y);
}