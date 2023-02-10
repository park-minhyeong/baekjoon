#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(int N)
{
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N - i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
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