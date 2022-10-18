#include <iostream>
using namespace std;
int main()
{
  //freopen("./input.txt", "r", stdin);
  int A, B, T;
  cin>>T;
  for (int i=0; i<T; i++)
  {
    cin>>A>>B;
    cout<<"Case #"<<i+1<<": "<<A+B<<"\n";
  }
  return 0;
}
