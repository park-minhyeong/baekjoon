#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //부동소수점 표현 자료형  float and double
  long double A, B;
  cin >> A >> B;
  //자리수
  cout << fixed << setprecision(10) << endl;
  cout << A / B;
}