#include <iostream>
#define MAX 9
using namespace std;
void FindMax(int *N)
{
  int max=N[0];
  int count=1;

  for (int i = 0; i < 8; i++)
  {
    if (max < N[i + 1])
    {
      max = N[i + 1];
      count = i + 2;
    }
  }
  cout<<max<<endl<<count;
}
int main()
{
  //freopen("input.txt", "r", stdin);
  int N[MAX] = {
      0,
  };

  for (int i = 0; i < MAX; i++)
  {
    cin >> N[i];
  }

  FindMax(N);
  
  return 0;
}