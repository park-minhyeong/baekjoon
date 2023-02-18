#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cmath>
#define endl "\n"
using namespace std;

void Solution()
{
	string name;
	int age, weight;
	while (true)
	{
		cin >> name >> age >> weight;
		if (name == "#" && age == 0 && weight == 0)
			break;
		if (age > 17 || weight >= 80)
			cout << name << " Senior" << '\n';
		else
			cout << name << " Junior" << '\n';
	}
}
int main()
{
	//freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// input 입력

	Solution();
	return 0;
}