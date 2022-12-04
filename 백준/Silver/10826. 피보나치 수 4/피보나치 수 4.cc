#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
string dp[10001];

string Sum(string A, string B)
{
	int temp;
	int carry = 0;
	string result;

	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	while (A.length() < B.length())
		A.append("0"); // STRING방식 += <-- append 역할;
	while (A.length() > B.length())
		B.append("0");
	for (int i = 0; i < A.length(); i++)
	{
		temp = (A[i] - '0' + B[i] - '0' + carry) % 10;
		carry = (A[i] - '0' + B[i] - '0' + carry) / 10;
		result.append(to_string(temp));
	}
	if (carry != 0)
		result.append(to_string(carry));

	reverse(result.begin(), result.end());
	return result;
}
void Fibonacci4(int N)
{
	dp[0] = '0';
	dp[1] = '1';

	for (int i = 2; i <= N; i++)
	{
		dp[i] = Sum(dp[i - 1], dp[i - 2]);
	}

	cout << dp[N] << endl;
}
int main()
{
	int N;

	cin >> N;
	Fibonacci4(N);

	return 0;
}