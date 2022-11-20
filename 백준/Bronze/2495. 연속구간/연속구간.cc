#include <iostream>
#include <vector>
using namespace std;

vector <int> result;

void HowMuchRange(string num)
{
	int max = 1, count = 1;
	for (int i = 0; i < num.length(); i++)
	{
		if (num[i] == num[i + 1])
		{
			count++;
			if (count > max)
				max = count;
		}
		else
			count = 1;
	}
	result.push_back(max);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string num;
	for (int i = 0; i < 3; i++){
		cin >> num;
		HowMuchRange(num);
	}

	for(auto iter:result)
	{
		cout<<iter<<endl;
	}
}