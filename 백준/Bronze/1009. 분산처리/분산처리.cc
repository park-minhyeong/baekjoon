#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(int a, int b)
{
	int res = 1;
	for (int i = 0; i < b; i++)
		res = (res * a) % 10;
	if (res != 0)
		cout << res << '\n';
	else
		cout << 10 << '\n';
}
int main()
{
	//freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int a, b;
		cin >> a >> b;
		Solution(a, b);
	}
	return 0;
}