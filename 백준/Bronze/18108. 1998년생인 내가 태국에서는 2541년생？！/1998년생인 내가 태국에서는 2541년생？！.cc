#include <iostream>
using namespace std;
int change_years(int y)
{
  return y-543;
}
int main()
{
  int year;
  cin >> year;
  cout<<change_years(year);
  return 0;
}