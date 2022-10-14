#include <iostream>
using namespace std;
int tcase, N, M, comb[31][31];
int Combination(int n, int r)
{
  //재귀 풀이
  if (n == r || r == 0)
    return 1;
  if (comb[n][r])
    return comb[n][r];
  return comb[n][r] = Combination(n-1, r-1) + Combination(n-1, r);
}

int main()
{
  //freopen("input.txt", "r", stdin);
  cin >> tcase;
  while (tcase--)
  {
    cin >> N >> M;
    cout << Combination(M, N) << endl;
  }
  return 0;
}