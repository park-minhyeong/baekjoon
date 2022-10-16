#include <iostream>
using namespace std;
int main()
{
  //freopen("input.txt", "r", stdin);
  int X;
  int bin = 0;
  cin >> X;
  
  //convert decimal numbers into binary numbers.
  while (X>0){
    if (X%2==1){
      bin++;
    }
    X/=2;
  }
  cout<<bin;
}