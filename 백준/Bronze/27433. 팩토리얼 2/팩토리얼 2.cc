#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

long long dp[21];

void Solution(int N)
{
	dp[0] = 1;
	dp[1] = 1;

	for (int i = 2; i <= N; i++)
	{
		dp[i] = dp[i - 1] * i;
	}

	cout << dp[N];
}
int main()
{
	//freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int N;
	cin >> N;

	Solution(N);
	return 0;
}