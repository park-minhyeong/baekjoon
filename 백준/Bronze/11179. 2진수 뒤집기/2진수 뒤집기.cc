#include<iostream>
#include<cstring>
#include<vector>
#include<deque>
#include<cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	long long int num;
	cin >> num;
	deque<int> list;
	while (num != 1) {
		list.push_front(num % 2);
		num /= 2;
	}
	list.push_front(1);
	deque<int> new_list = list;
	for (int i = 0; i <list.size(); i++) {
		new_list[i] = list[list.size() - 1 - i];
	}

	int sum = 0;
	int idx = 0;

	while (!new_list.empty())
	{
		int num = new_list[new_list.size()-1];
		new_list.pop_back();
		sum += num * pow(2, idx);
		idx++;
	}
	cout << sum << "\n";

	return 0;
}
