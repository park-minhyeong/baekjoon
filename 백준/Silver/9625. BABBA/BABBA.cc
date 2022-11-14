#include <iostream>
#include <vector>
#include <utility>
using namespace std;

using p = pair<int, int>;
vector<p> dp(46, make_pair(-1, -1));

p SumPair(const p &a, const p &b)
{
  return {a.first + b.first, a.second + b.second};
}

p BABBA(int k)
{

  if (k == 0)
    return make_pair(1, 0);
  if (k == 1)
    return make_pair(0, 1);
  else if (dp[k] != make_pair(-1, -1))
    return dp[k];
  return dp[k] = SumPair(BABBA(k - 1), BABBA(k - 2));
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int K;
  cin >> K;

  p result = BABBA(K);
  cout << result.first << " " << result.second;

  return 0;
}
