#include <cstdio>
#include <vector>
#define MAX_SIZE 100001

using namespace std;

class MaxHeap
{
private:
  vector<int> data;

public:
  MaxHeap()
  {
    this->data.push_back(-1);
  }
  MaxHeap(int size)
  {
    this->data.reserve(size);
    this->data.push_back(-1);
  }
  int Pop()
  {
    if (this->data.size() <= 1)
    {
      return 0;
    }
    int current = 1;
    int left_child = 2;
    int right_child = 3;
    int ret = this->data[current];
    int last = this->data.size() - 1;

    swap(this->data[current], this->data[last]);
    this->data.pop_back();
    while (this->data.size() > left_child)
    {
      int larger_index = left_child;
      if (this->data.size() > right_child)
      {
        if (this->data[right_child] > this->data[left_child])
        {
          larger_index = right_child;
        }
      }
      if (this->data[larger_index] > this->data[current])
      {
        swap(this->data[current], this->data[larger_index]);
        current = larger_index;
        left_child = current * 2;
        right_child = left_child + 1;
      }
      else
      {
        break;
      }
    }
    return ret;
  }
  void Push(int val)
  {
    this->data.push_back(val);
    int current = data.size() - 1;
    int parent = current / 2;
    while (parent > 0 && this->data[current] > this->data[parent])
    {
      swap(this->data[current], this->data[parent]);
      current = parent;
      parent = current / 2;
    }
  }
};

int main(int args, const char* argv[])
{
  //freopen("input.txt", "r", stdin);
  int n;
  scanf("%d", &n);

  MaxHeap heap(MAX_SIZE); 

  for (int i = 0; i < n; i++)
  {
    int vlaue;
    scanf("%d", &vlaue);

    if (vlaue > 0)
      heap.Push(vlaue);
    else
      printf("%d\n", heap.Pop());
  }
  return 0;
}