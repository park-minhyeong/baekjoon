#include <iostream>
using namespace std;
int main()
{
  //freopen("input.txt","r",stdin);
  int A, B, T;

  cin>>T;

  for (int i=0; i<T; i++)
  {
    cin>>A>>B;
    cout<<"Case #"<<i+1<<": "<<A<<" + "<<B<<" = "<<A+B<<endl;
  }
  return 0;
}