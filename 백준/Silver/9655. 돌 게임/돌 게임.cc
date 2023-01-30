#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

int dp[1001];

void Solution(int N)
{
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= N; i++)
	{
		dp[i] = min(dp[i - 1] + 1, dp[i - 3] + 1);
	}

	if (dp[N] % 2 == 0)
		cout << "CY";
	else
		cout << "SK";
}
int main()
{
	//freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	Solution(N);
	return 0;
}