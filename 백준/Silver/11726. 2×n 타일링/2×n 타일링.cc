#include <iostream>
using namespace std;
int dp[1001];
void Tiling(int N)
{
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= N; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2])%10007;
	}
	cout << dp[N];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	Tiling(N);

	return 0;
}