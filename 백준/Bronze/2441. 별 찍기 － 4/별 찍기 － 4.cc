#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

void Solution(int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int k = N - i; k > 0; k--)
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

	int N;
	cin >> N;
	Solution(N);

	return 0;
}