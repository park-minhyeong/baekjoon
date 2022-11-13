#include <iostream>
#include <cstring>
#include <regex>
using namespace std;

long long MakeMin(string num1, string num2)
{
  string A=num1;
  string B=num2;
  
  A=regex_replace(A, regex("6"), "5");
  B=regex_replace(B, regex("6"), "5");

  return stoi(A) + stoi(B);
}
long long MakeMax(string num1, string num2)
{
  string A=num1;
  string B=num2;
  
  A=regex_replace(A, regex("5"), "6");
  B=regex_replace(B, regex("5"), "6");

  return stoi(A) + stoi(B);
}


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string  num1, num2;

  cin >> num1 >> num2;
  cout<<MakeMin(num1, num2)<<" "<<MakeMax(num1, num2);

  return 0;
}