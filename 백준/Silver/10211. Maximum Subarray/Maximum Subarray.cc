#include <iostream>
#include <algorithm>
int dp[1001], arr[1001];
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T, N;
	cin >> T;
	while (T--)
	{
		int N;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
		}
		int ans = arr[0];
		dp[0] = arr[0];

		for (int i = 1; i < N; i++)
		{
			dp[i] = max(dp[i - 1] + arr[i], arr[i]);
			ans = max(dp[i], ans);
		}
		cout << ans << '\n';
	}
	return 0;
}