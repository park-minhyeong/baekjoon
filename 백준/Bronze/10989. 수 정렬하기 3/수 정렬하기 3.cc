#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define endl '\n'

using namespace std;

void Solution(int T)
{
	int arr[10001] = {
		0,
	};
	for (int i = 0; i < T; i++)
	{
		int number;
		cin >> number;
		arr[number] += 1;
	}
	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 0; j < arr[i]; j++)
			cout << i << endl;
	}
}
int main()
{
	//freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	Solution(T);

	return 0;
}