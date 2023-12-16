#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // cin/cout 입출력으로 인한 시간초과 막기위해 사용
    // c stream과 c++ stream의 동기화를 해제 -> 무조건 c tream과 c++ stream중 하나만 사용
    ios::sync_with_stdio(false);
    // cin 명령 전 cout 버퍼를 비우지 않게함, 코테는 입출력 꼬여도 정답처리
    cin.tie(nullptr);

    // c stream: scanf와 printf
    // char*를 이용한 c스타일 문자열 처리
    char a[10];
    printf("input: ");
    scanf("%s", a);
    printf("a is %s\n", a);

    // c++ stream: cin과 cout
    // c++ string을 사용할 수 있다는 강점!!
    string s;
    cout << "input: ";
    cin >> s;
    cout << "s is " << s;

    // 위 둘다 공백의 앞까지만 입력받음
    // 해결방법
    // 1. scanf의 옵션 이용: 줄바꿈 앞까지 입력
    scanf("%[^\n]", a);
    // 2. getline 함수: c++ string만 사용 가능
    getline(cin, s);

    // 줄바꿈 endl과 \n
    // 무조건 \n 사용, endl은 \n출력후 버퍼를 비우는 역할을 함 -> 코테에서는 시간만 잡아먹을 뿐

    return 0;
}
