#include <iostream>
#include <cstring>
using namespace std;
int Score(string &quiz) //string 받을 시, 포인터취급.
{
  int stack=0; 
  int sum = 0;
  for (char &v : quiz)
  {
    if (v == 'O')
    {
      stack++;
      sum += stack;
    }
    else
      stack = 0;
  }
  return sum;
}
int main(int argc, const char *argv[])
{
  //freopen("input.txt","r",stdin);
  int T;
  cin>>T;

  for (int i=0;i<T;i++){
    string quiz;
    cin>>quiz;
    cout<<Score(quiz)<<endl;
  }
  return 0;
}
