#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  //freopen("input.txt", "r", stdin);

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin>>N;
  vector <int> v;//size정하는 순간0으로 채워져서 초기화임..;
  while (N--)
  {
    int score;
    cin>>score;
    v.push_back(score);
  }
  sort(v.begin(), v.end());

  cout<<v.back()-v.front();
  return 0;
}