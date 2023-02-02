#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

static int mod = 1000000000;
static long long D[1000001];

void Solution(long long N)
{
	D[1] = 0;
	D[2] = 1;

	for (int i = 3; i <= N; i++)
	{
		D[i] = (i - 1) * (D[i - 1] + D[i - 2]) % mod;
	}
	cout << D[N];
}
int main()
{
	//freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long N;
	cin >> N;
	Solution(N);

	return 0;
}