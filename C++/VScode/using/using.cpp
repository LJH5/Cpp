#include <iostream>

namespace a
{
    int my_var(10);
} // namespace a

namespace b
{
    int my_var(20);
} // namespace b


int main()
{
    // std 전부 가져오기
    using namespace std;

    // cout만 가져오기
    // using std::cout;

    cout << "hello\n";

    // ambiguity
    // using namespace b;
    // using namespace a;
    // cout << my_var << "\n";

    {
        using namespace a;
        cout << my_var << "\n";
    }
    {
        using namespace b;
        cout << my_var << "\n";
    }

}