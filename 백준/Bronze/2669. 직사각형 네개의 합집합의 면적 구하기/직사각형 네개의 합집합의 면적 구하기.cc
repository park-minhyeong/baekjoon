#include <iostream>
using namespace std;
int main()
{
  //freopen("input.txt", "r", stdin);
  int square[100][100] = {
      0,
  };
  int x1, y1, x2, y2;
  int area=0;
  for (int i = 0; i < 4; i++)
  {
    cin >> x1 >> y1 >> x2 >> y2;
    for (int j = x1; j < x2; j++)
    {
      for (int k = y1; k < y2; k++)
      {
        if (square[j][k] == 0)
          square[j][k] = 1;
      }
    }
  }

  for (int i = 0; i < 100; i++)
  {
    for (int j = 0; j < 100; j++)
    {
      if(square[i][j]==1)
        area++;
    }
  }

  cout<<area;

  return 0;
}