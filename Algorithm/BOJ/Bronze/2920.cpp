#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[8]{0};
    int asc{0}, desc{0};
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];

        if(arr[i] == i + 1)
            asc++;
        else if (arr[i] == 8 - i)
            desc++;
    }

    if (asc == 8)
        cout << "ascending";
    else if (desc == 8)
        cout << "descending";
    else
        cout << "mixed";
}
