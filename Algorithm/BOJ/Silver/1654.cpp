#include <iostream>
#include <algorithm>

using namespace std;

int ans;
int N,K;
int list[10000];

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> K >> N;

	int max_len = 0;

	for (int i = 0; i < K; i++)
	{
		cin >> list[i];
		max_len = max(max_len, list[i]);
	}

	int start = 1, end = max_len, mid;

	while (start <= end)
	{
		mid = (start + end) / 2;
		int now = 0;

		for (int i = 0; i < K; i++)
		{
			now += list[i] / mid;
		}

		if (now >= N)
		{
			start = mid + 1;
			ans = max(ans, mid);
		}
		else
		{
			end = mid - 1;
		}
	}

	cout << ans << '\n';
}