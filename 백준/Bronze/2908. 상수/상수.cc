#include <iostream>
#include <cstring>
using namespace std;
void SangsuBrain(string A, string B)
{
  string big_one;
  for (int i = 2; i >= 0; i--)
  {
    if (A[i] < B[i])
    {
      big_one = B;
      break;
    }
    else if (A[i] > B[i])
    {
      big_one = A;
      break;
    }
  }
  cout<<big_one[2]<<big_one[1]<<big_one[0];
}

int main()
{
  //freopen("input.txt", "r", stdin);
  string A, B;
  cin >> A >> B;

  SangsuBrain(A, B);

  return 0;
}