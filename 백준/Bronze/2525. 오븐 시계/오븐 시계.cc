#include <iostream>
using namespace std;
int main()
{
  int H, M, time, count;
  cin >> H >> M;
  cin >> time;

  count = (M + time) / 60;
  //이중 if
  if (count > 0)
  {
    if (H + count > 23)
    {
      H = (H + count) % 24;
    }
    else
    {
      H = H + count;
    }
    M = (M + time) % 60;
  }
  else
    M = M + time;

  cout << H << " " << M;
  return 0;
}