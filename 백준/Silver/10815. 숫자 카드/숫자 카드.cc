#include <iostream>
#include <algorithm>
using namespace std;
int BinarySearch(int *data, int size, int search)
{
  int start = 0, end = size - 1;
  int medium;
  while (start <= end)
  {
    medium = (start + end) / 2 ;
    if (data[medium] == search) {
      return 1;}
    else if (data[medium] > search) end=medium-1;
    else start=medium+1;
  }
  return 0;
}
int main()
{
  //freopen("input.txt", "r", stdin);
  int N = 0, M = 0;

  cin >> N;
  int SangGeun[N] = {
      0,
  };
  for (int i = 0; i < N; i++)
  {
    cin >> SangGeun[i];
  }

  cin >> M;
  int Guess[M] = {
      0,
  };
  for (int i = 0; i < M; i++)
  {
    cin >> Guess[i];
  }
  sort(SangGeun, SangGeun+N);//이진탐색을 위한 정렬함수 by STL
  for (int i=0; i<M; i++)
  {
    cout<<BinarySearch(SangGeun, N, Guess[i])<<" ";
  }

  return 0;
}