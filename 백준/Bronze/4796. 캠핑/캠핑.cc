#include <iostream>
using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);
	int count = 1;
	while (1)
	{
		int L, P, V;
		cin >> L >> P >> V;

		if (L == 0 && P == 0 && V == 0)
			break;
		int use = V / P;
		int remain = V % P;
		if (L < remain)
			remain = L;

		int result = L * use + remain;

		cout << "Case " << count << ": " << result << endl;
		count++;
	}
	return 0;
}