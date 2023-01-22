#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	//freopen("input.txt", "r", stdin);
	int A, B, C;
	while (cin >> A >> B >> C)
	{
		cout << max(B - A, C - B) - 1 << endl;
	}
}