#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int num;
  int result=0;

  for (int i=0; i<5;i++){
    cin>>num;
    result+=pow(num,2);
  }
  cout << result%10;

  return 0;
}