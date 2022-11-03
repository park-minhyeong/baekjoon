#include <iostream>
#include <cstring>
using namespace std;
class DataNode
{
private:
  int number;
  DataNode *next;

public:
  // int 타입의 값을 받는 생성자를 생성하고 이니셜라이져로 value를 number로 초기화, next 값을 NULL로 초기화.
  DataNode(int value) : number(value), next(NULL){};
  void SetNumber(int value)
  {
    number = value;
  }
  void SetNext(DataNode *value)
  {
    next = value;
  }
  int GetNumber()
  {
    return number;
  }
  DataNode *GetNext()
  {
    return next;
  }
};
class Queue
{
private:
  int size;
  DataNode *front;
  DataNode *back;

public:
  Queue() : size(0), front(NULL), back(NULL) {}
  void Push(int number)
  {
    DataNode *newNode = new DataNode(number);
    if (front == NULL)
    {
      front = newNode;
      back = newNode;
    }
    else
    {
      back->SetNext(newNode);
      back = newNode;
    }
    size++;
  }
  int Pop()
  {
    if (!IsEmpty())
    {
      DataNode *temp = front;
      int value = temp->GetNumber();
      if (temp->GetNext())
      {
        front = temp->GetNext();
      }
      else
      {
        front = NULL;
        back = NULL;
      }
      size--;
      delete temp;
      return value;
    }
    return -1;
  }
  int GetSize()
  {
    return size;
  }

  bool IsEmpty()
  {
    if (front == NULL)
    {
      return true;
    }
    return false;
  }
  int GetFrontValue()
  {
    if (front != NULL)
    {
      return front->GetNumber();
    }
    return -1;
  }
  int GetBackValue()
  {
    if (back != NULL)
    {
      return back->GetNumber();
    }
    return -1;
  }
};
int main(int argc, const char *argv[])
{
  //freopen("input.txt", "r", stdin);
  int count = 0;
  cin >> count;

  char str[128];
  char *first = NULL;
  cin.ignore();

  Queue queue;

  for (int i = 0; i < count; i++)
  {
    cin.getline(str, 128, '\n');
    first = strtok(str, " ");

    if (strcmp("push", first) == 0)
    {
      char *second = strtok(NULL, " ");
      int num = atoi(second);
      queue.Push(num);
    }
    else if (strcmp("pop", first) == 0)
    {
      cout << queue.Pop() << endl;
    }
    else if (strcmp("size", first) == 0)
    {
      cout << queue.GetSize() << endl;
    }
    else if (strcmp("empty", first) == 0)
    {
      cout << queue.IsEmpty() << endl;
    }
    else if (strcmp("front", first) == 0)
    {
      cout << queue.GetFrontValue() << endl;
    }
    else if (strcmp("back", first) == 0)
    {
      cout << queue.GetBackValue() << endl;
    }
  }
}