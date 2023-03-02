#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

int dp[46];
void Solution(int N)
{
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= N; i++)
		dp[i] = dp[i - 1] + dp[i - 2];

	cout << dp[N] << endl;
}
int main()
{
	//freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;
		Solution(N);
	}
	return 0;
}