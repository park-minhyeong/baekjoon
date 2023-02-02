#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

bool compare(const tuple<int, int, string> &t1, const tuple<int, int, string> &t2);
void Solution(int tcase, vector<tuple<int, int, string>> &v)
{
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < tcase; i++)
	{
		cout << get<1>(v[i]) << " " << get<2>(v[i]) << endl;
	}
}
bool compare(const tuple<int, int, string> &t1, const tuple<int, int, string> &t2)
{
	if (get<1>(t1) == get<1>(t2))
		return get<0>(t1) < get<0>(t2);
	return get<1>(t1) < get<1>(t2);
	// 오름차순
}
int main()
{
	//freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력
	int tcase;
	vector<tuple<int, int, string>> v;
	int count = 0;
	cin >> tcase;
	for (int i = 0; i < tcase; i++)
	{
		int age;
		string b;
		cin >> age >> b;
		v.push_back(tuple<int, int, string>(count, age, b));
		count++;
	}

	Solution(tcase, v);

	return 0;
}