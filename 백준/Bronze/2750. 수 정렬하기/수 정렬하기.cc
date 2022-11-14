#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> v;
  while (N--)
  {
    int num;
    cin>>num;
    v.push_back(num);
  }
  sort(v.begin(), v.end());
  for (auto loop: v)
    cout<<loop<<endl;
  return 0;
}