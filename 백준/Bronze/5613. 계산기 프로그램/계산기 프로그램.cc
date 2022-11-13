#include <iostream>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  //freopen("input.txt", "r", stdin);

  long long num = 0;
  char opr;
  long long result = 0;
  cin >> num;
  result = num;
  while (1)
  {
    cin >> opr;
    if (opr == '=')
    {
      cout << result << endl;
      break;
    }
    cin>>num;
    if (opr == '+')
      result += num;
    else if (opr == '-')
      result -= num;
    else if (opr == '*')
      result *= num;
    else if (opr == '/')
      result /= num;
  }

  return 0;
}