#include <iostream>
#include <algorithm>
using namespace std;

int dp[16]={0, };
void HowMuchMoney(int N)
{
	int T[16];
	int P[16];


	for (int i = 1; i < N + 1; i++)
	{
		cin >> T[i] >> P[i];
	}

	for (int i = N; i > 0; i--)
	{
		if (i + T[i] > N + 1)
			dp[i] = dp[i+1];
		else
			dp[i] = max(dp[i + 1], P[i] + dp[i+T[i]]);
	}

	cout << dp[1];
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//freopen(".test/input.txt", "r", stdin);

	int N;
	cin >> N;
	
	HowMuchMoney(N);

	return 0;
}