#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  //freopen("input.txt", "r", stdin);
  int T;
  int R;
  string S;
  cin >>T;
  while(T--)
  {
    cin>>R>>S;
    for (int i=0;i<S.length();i++){
      for(int j=0; j<R;j++)
        cout<<S[i];
    }
    cout<<endl;
  }
  return 0;
}