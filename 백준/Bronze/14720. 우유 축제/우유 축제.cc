#include <iostream>
using namespace std;

// 0 -> 1 -> 2 -> 0
int main()
{
  int N;
  int milkStore[1000]={0,}; //vector로 푸는거 어떰.
  cin>>N;
  int youngHak =0;
  int max=0;

  for (int i=0; i<N; i++)
    cin>>milkStore[i];
  
  for (int i =0; i<N; i++)
  {
    if(milkStore[i]==0&&youngHak==0)
    {
      youngHak=1;
      max++;
    }
    if(milkStore[i]==1&&youngHak==1)
    {
      youngHak=2;
      max++;
    }
    if(milkStore[i]==2&&youngHak==2)
    {
      youngHak=-0;
      max++;
    }
  }

  cout<<max;

  return 0;
}