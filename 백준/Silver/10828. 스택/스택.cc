#include <iostream>
#include <cstring>
using namespace std;

class DataNode
{
private:
  int data;
  DataNode *next;

public:
  DataNode(int value) : data(value), next(NULL){};
  
  void SetNext(DataNode *value) //대입함수... next에 대입하려면 자료형이 같아야한다.
  {
    next = value;
  }
  int GetData() //반환함수
  {
    return data;
  }
  DataNode *GetNext() //반환함수
  {
    return next;
  }
};
class Stack
{
private:
  int size;
  DataNode *top;
  DataNode *bottom;

public:
  Stack() : size(0), top(NULL), bottom(NULL){}; // size=0, top=NULL, bottom=NULL;
  void Push(int data)                           // Data 넣는다: 변화 수행... void
  {
    DataNode *newNode = new DataNode(data);
    if (top == NULL)
    {
      top = newNode;
      bottom = newNode;
    }
    else
    {
      //(*top).SetNext() == top->SetNext()
      newNode->SetNext(top); // SetNext 멤버함수를 쓰기위해서
      top = newNode;
    }
    size++;
  }
  int Pop() // Data 뺀다: 변화 수행 + 출력 수행... int
  {
    if (!IsEmpty())
    {
      DataNode *temp = top;//DataNode일 필요가 있는진 ㅁㄹ;
      int value = temp->GetData();
      if (temp->GetNext())
      {
        top = temp->GetNext();
      }
      else//top의 next가 존재하지 않으면 NULL로 돌아간다.
      {
        top = NULL;
        bottom = NULL;
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
    if (bottom == NULL)
      return true;
    return false;
  }
  int GetTopValue()
  {
    if (top != NULL)
      return top->GetData(); //다른 클래스 함수이용방법.
    return -1;
  }
  int GetBottomValue()
  {
    if (bottom != NULL)
      return bottom->GetData(); //다른 클래스 함수이용방법.
    return -1;
  }
};
int main()
{
  //freopen("input.txt", "r", stdin);
  int cmd = 0;
  cin >> cmd;

  char str[128];
  char *first = NULL;
  cin.ignore();

  Stack stack;

  for (int i = 0; i < cmd; i++)
  {
    cin.getline(str, 128, '\n');
    first = strtok(str, " ");

    if (strcmp("push", first) == 0)
    {
      char *second = strtok(NULL, " ");
      int num = atoi(second);
      stack.Push(num);
    }
    else if (strcmp("pop", first) == 0)
    {
      cout << stack.Pop() << endl;
    }
    else if (strcmp("size", first) == 0)
    {
      cout << stack.GetSize() << endl;
    }
    else if (strcmp("empty", first) == 0)
    {
      cout << stack.IsEmpty() << endl;
    }
    else if (strcmp("top", first) == 0)
    {
      cout << stack.GetTopValue() << endl;
    }
  }
  return 0;
}
