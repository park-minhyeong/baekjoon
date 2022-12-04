#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'

using namespace std;
int dp[100001][2];

void Sequence(int N, vector<int> v)
{
	// Bottom-Up
	dp[0][0] = 1;
	dp[0][1] = 1;
	int max = 1;

	for (int i = 0; i < N - 1; i++)
	{
		if (v[i] < v[i + 1])
		{
			dp[i + 1][0] = dp[i][0] + 1;
			dp[i + 1][1] = 1;
		}
		else if (v[i] > v[i + 1])
		{
			dp[i + 1][0] = 1;
			dp[i + 1][1] = dp[i][1] + 1;
		}
		else // dp[i]==dp[i+1]
		{
			dp[i + 1][0] = dp[i][0] + 1;
			dp[i + 1][1] = dp[i][1] + 1;
		}
		if (dp[i + 1][0] > max)
			max = dp[i + 1][0];

		if (dp[i + 1][1] > max)
			max = dp[i + 1][1];
	}
	cout << max << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//freopen(".test/input.txt", "r", stdin);

	int N;
	vector<int> sequence;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		sequence.push_back(num);
	}
	Sequence(N, sequence);

	return 0;
}