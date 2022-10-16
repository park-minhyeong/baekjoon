#include <iostream>
#include <string>
using namespace std;
int main()
{
  //freopen("input.txt", "r", stdin);
  int num1;
  string num2;

  cin>>num1;
  cin>>num2;

  for(int i=0;i<3;i++)
    cout<<num1*stoi(num2.substr(2-i,1))<<endl;
  cout<<num1*stoi(num2);

  return 0;
}