#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dp[1001];
void OnlineSelling(int N, int M, vector<int> customers)
{
	dp[1] = customers[0];
	int maximum = 0;
	for (int i = 2; i <= M; i++)
	{
		if (i <= N)
		{
			if (dp[i - 1] < i*customers[i - 1])
				maximum = customers[i - 1];
			dp[i] = max(dp[i - 1], i * customers[i - 1]);
		}
		else
		{
			if (dp[i - 1] < N*customers[i - 1])
				maximum = customers[i - 1];
			dp[i] = max(dp[i - 1], N * customers[i - 1]);
		}
	}
	cout << maximum<<" " << dp[M];
}

bool comp(int a, int b)
{
	return a > b;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//freopen(".test/input.txt", "r", stdin);

	int N, M;
	cin >> N >> M;
	vector<int> customers;

	for (int i = 0; i < M; i++)
	{
		int temp;
		cin >> temp;
		customers.push_back(temp);
	}

	sort(customers.begin(), customers.end(), comp);
	
	OnlineSelling(N, M, customers);

	return 0;
}