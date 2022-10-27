#include <iostream>
using namespace std;
void FindSmallNumbers(int N, int X, int *numbers)
{
  int result[N];
  int count=0;
  for(int i=0;i<N;i++)
  {
    if(numbers[i]<X){
      result[count]=numbers[i];
      count++;
    }
  }
  for(int i=0;i<count;i++)
    cout<<result[i]<<" ";
}

int main()
{
  //freopen("input.txt", "r", stdin);

  int N, X;
  int numbers[N];
  cin >> N >> X;
  for(int i=0; i<N;i++)
    cin>>numbers[i];

  FindSmallNumbers(N,X,numbers);

  return 0;
}