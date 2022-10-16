//leap year: multiple of 4 and not multiple of 100 or multiple of 400
#include <iostream>
using namespace std;
int main()
{
  int year;
  cin >> year;
  if(year%4==0 && year%100!=0)
    cout<<1;
  else if(year%400==0)
    cout<<1;
  else
    cout<<0;

  return 0;
}