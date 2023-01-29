#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

int dp[100] = {
	0,
};
int Solution(int n)
{
	if (n <= 1)
		return n;

	if (dp[n] > 0)
		return dp[n];

	dp[n] = Solution(n - 1) + Solution(n - 2);
	return dp[n];
}
int main()
{
	//freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	cout << Solution(n);

	return 0;
}