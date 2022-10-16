#include <iostream>
using namespace std;
int FindBigOne(int A, int B, int C)
{
  if (A > B)
  {
    if (A > C)
      return A;
    else
    {
      if (B > C)
        return B;
      else
        return C;
    }
  }
  else if (B > C)
    return B;
  else
    return C;
}
int main()
{
  int A, B, C;
  cin >> A >> B >> C;

  if (A == B && B == C)
    cout << 10000 + A * 1000;
  else if (A == B || B == C || C == A)
    if (A == B)
      cout << 1000 + A * 100;
    else
      cout << 1000 + C * 100;
  else
    cout << 100 * FindBigOne(A, B, C);
  return 0;
}