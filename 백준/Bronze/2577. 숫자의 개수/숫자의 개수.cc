#include <iostream>
#include <cstring>
using namespace std;
void CountNumbers(int mpABC)
{
  int result[10]={0,};
  string str = to_string(mpABC);

  for (int i=0;i<str.length();i++){
    if(str[i]=='0')
      result[0]++;
    else if(str[i]=='1')
      result[1]++;
    else if(str[i]=='2')
      result[2]++;
    else if(str[i]=='3')
      result[3]++;
    else if(str[i]=='4')
      result[4]++;
    else if(str[i]=='5')
      result[5]++;
    else if(str[i]=='6')
      result[6]++;
    else if(str[i]=='7')
      result[7]++;
    else if(str[i]=='8')
      result[8]++;
    else if(str[i]=='9')
      result[9]++;  
  }

  for(int i=0; i<10; i++)
    cout<<result[i]<<endl;
}
int main()
{
  //freopen("input.txt", "r", stdin);
  int A, B, C;
  int mpABC;
  cin>>A>>B>>C;
  mpABC=A*B*C;

  CountNumbers(mpABC);

  return 0;
}