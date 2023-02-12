#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution(vector<pair<int, int>> v)
{
	int res = 0;
	vector<int> idx(5);
	sort(v.begin(), v.end());
	for (int i = 7; i >= 3; i--) // 가장 높은 점수 5개를 더함
		res += v[i].first;

	cout << res << endl;

	int j = 0;
	for (int i = 7; i >= 3; i--)
	{ // 가장 높은 점수의 문제들을 따로 저장
		idx[j] = v[i].second;
		sort(idx.begin(), idx.end()); // 문제 번호 오름차순 정렬
	}

	for (int i = 0; i < 5; i++)
		cout << idx[i] << " ";
}
int main()
{
	//freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	vector<pair<int, int>> v(8);

	for (int i = 0; i < 8; i++)
	{
		cin >> v[i].first;
		v[i].second = i + 1;
	}

	Solution(v);
	return 0;
}