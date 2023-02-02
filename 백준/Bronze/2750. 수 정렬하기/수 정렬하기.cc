#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std;

void Solution(int N)
{
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());

	for (auto iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << endl;
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