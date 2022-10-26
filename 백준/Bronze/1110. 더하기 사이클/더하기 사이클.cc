#include <iostream>
using namespace std;
int main()
{
  int N, var;
  int count=0;
  cin>>N;
  var=N;
  while(1)
  {
    var=(var%10)*10+(var/10+var%10)%10;
    count++;

    if(var==N) //첫시행 스킵= if문 삽입
      break;
  }
  cout<<count;

  return 0;
}