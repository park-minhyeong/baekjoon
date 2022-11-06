#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  long long int sum = 0;

  string A, B;
  cin >> A >> B;

  for (int i = 0; i < A.length(); i++)
  {
    for (int j = 0; j < B.length(); j++)
    {
      char _A = A[i];
      char _B = B[j];

      sum += ((_A - '0') * (_B - '0'));
    }
  }
  cout<<sum;
  return 0;
}