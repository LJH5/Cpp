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
        // �Է� ���� ��(������ ������ ����� ��)
        if (std::cin.fail())
        {
            // clear(): �Է� ���� �� ���� ������ ���Է� �Ҽ��ֵ��� ��
            std::cin.clear();
            std::cin.ignore(99999, '\n');
            cout << "Invalid number, please try again" << "\n";
        }
        else
        {
            // ignore(n, cn): ���� �����, n�� ����(������ ������), cn�� ������ ����(������ �� ��� ����)
            std::cin.ignore(99999, '\n');
            return x;
        }
    }
}

char getOperator()
{
    // ����� �Է��Ҷ����� ���� �Է�
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