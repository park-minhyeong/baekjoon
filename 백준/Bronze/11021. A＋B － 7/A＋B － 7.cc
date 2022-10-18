#include <cstdio>
int main()
{
  //freopen("./input.txt", "r", stdin);
  int A, B, T;
  scanf("%d", &T);
  for (int i=0; i<T; i++)
  {
    scanf("%d %d", &A, &B);
    printf("Case #%d: %d\n", i+1, A+B);
  }
  return 0;
}