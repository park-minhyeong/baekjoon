#include <iostream>
#include <cstring>
using namespace std;
string ChangeNum(string X)
{
  int sum=0;
  for(int i=0; i<X.length(); i++){
    sum+=X[i]-'0';
  }
  return to_string(sum);
}
int main()
{
  string X;
  int sum = 0;
  int count = 0;

  cin >> X;
  while(X.length() != 1){//56이 11인데 11부터 뭔가 안됨.
    X=ChangeNum(X);
    count++;
  }

  cout<<count<<"\n";
  if (stoi(X) % 3 == 0)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}