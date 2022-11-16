#include <iostream>
using namespace std;
//DP로 풀었다.
long long int facto[12] = {
    0,
};
int factorial(int N)
{
  if (N == 0)
  {
    facto[0] = 1;
    return facto[0];
  }
  else if (facto[N] != 0)
    return facto[N];

  else
    return facto[N] = N * factorial(N - 1);
}
int main()
{
  int N;
  cin >> N;

  cout<<factorial(N);
  return 0;
}