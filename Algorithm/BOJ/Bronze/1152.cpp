#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int cnt = 1;
	string str;
	getline(cin, str);
	int str_len = str.length();
	for (int i = 0; i < str_len; i++)
		if (str[i] == ' ') cnt++;

	if (str[0] == ' ')	cnt--;
	if (str[str.length() - 1] == ' ') cnt--;

	return 0;
}