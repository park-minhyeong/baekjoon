#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

int dp[16][16];

/*

	15 16
	   15
	...
	1 2
 */
void Solution()
{
	for (int i = 1; i <= 15; i++)
	{
		for (int j = 0; j < 16 - i; j++)
		{
			dp[i][j] = (dp[i - 1][j] + dp[i - 1][j + 1]) % 10;
		}
	}
	cout << dp[14][0] << dp[14][1];
}
int main()
{
	//freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	string A, B;
	cin >> A >> B;

	for (int i = 0; i < 8; i++)
	{
		dp[0][2 * i] = int(A[i] - '0');
		dp[0][2 * i + 1] = int(B[i] - '0');
	}
	Solution();
	return 0;
}