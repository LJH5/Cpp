#include <bits/stdc++.h>
using namespace std;

int n = 10;
int arr[11] = {14, 51, 123, 24, 23, -12, 2, 42, 10, -80};

void quick_sort(int st, int en)
{
    if(en <= st + 1) return;

    int pivot = arr[st];
    // 포인터 l
    int l = st + 1;
    // 포인터 r
    int r = en - 1;

    while (true)
    {
        // pivot 보다 포인터 l의 값이 작으면 오른쪽으로 이동
        while (l <= r && arr[l] <= pivot) l++;

        // pivot 보다 포인터 r의 값 값이 크면 왼쪽으로 이동
        while (l <= r && arr[r] >= pivot) r--;

        // 포인터 l과 r이 역전되면 종료
        if (l > r) break;
        swap(arr[l], arr[r]);
    }
     // 자리 바꾸기
    swap(arr[st], arr[r]);
    quick_sort(st, r);
    quick_sort(r + 1, en);
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    quick_sort(0, n);

    for(int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
