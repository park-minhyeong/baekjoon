#include <iostream>
#include <cstring>
using namespace std;

string FindScale(int *scale)
{
  int count = 0;
  string result;
  for (int i = 0; i < 7; i++)
  {
    if (scale[i] < scale[i+1])
      count++;
  }
  if (count == 7)
    result = "ascending";
  else if (count == 0)
    result = "descending";
  else
    result = "mixed";

  return result;
}

int main(int argc, const char *argv[])
{
  int scale[8];
  for (int i = 0; i < 8; i++)
    cin >> scale[i];

  cout << FindScale(scale);

  return 0;
}