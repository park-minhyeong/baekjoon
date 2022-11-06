#include <iostream>
#include <cmath>
using namespace std;
void SizeTV(double D, double H, double W)
{
  double x = sqrt(pow(D, 2) / (pow(W, 2) + pow(H, 2)));

  cout << floor(H * x) << endl;
  cout << floor(W * x);
}
int main()
{
  int D, H, W;

  cin >> D >> H >> W;
  SizeTV(D, H, W);
  return 0;
}