#include <iostream>
#include <set>
using namespace std;
int main()
{
  //freopen("input.txt","r",stdin);
  int numbers[10];
  int count =0;
  for(int i=0; i<10;i++)
    cin>>numbers[i];

  set<int>remainder;
  for(int i=0; i<10; i++)
    remainder.insert(numbers[i]%42);

  cout<< remainder.size();
  return 0;
}