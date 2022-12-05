#include <iostream>
#include <algorithm>
using namespace std;

int dp[101][100001];
int W[101], V[101];
void KnapsackProblem(int N, int K)
{
	for (int i = 1; i <= N; i++)
	{
		cin >> W[i] >> V[i];
	}
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= K; j++)
		{
			if (j >= W[i])
			{
				dp[i][j] = max(dp[i - 1][j - W[i]] + V[i], dp[i - 1][j]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	cout << dp[N][K];
}

int main()
{

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	//freopen(".test/input.txt", "r", stdin);
	
	int N, K;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		cin >> W[i] >> V[i];
	KnapsackProblem(N, K);

	return 0;
}