#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <stack>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(stack<int> stk)
{
	int count = 0;
	int max = 0;
	while (stk.size())
	{
		if (max < stk.top())
		{
			max = stk.top();
			count++;
		}
		stk.pop();
	}
	cout << count;
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
	stack<int> stk;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		stk.push(temp);
	}
	Solution(stk);
	return 0;
}