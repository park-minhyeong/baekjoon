#include <iostream>
#include <cstring>
using namespace std;
class DataNode
{
private:
  int data;
  DataNode *prev;
  DataNode *next;

public:
  DataNode(int value): data(value), prev(NULL), next(NULL){};
  void SetPrev(DataNode *value)
  {
    prev=value;
  }
  void SetNext(DataNode *value)
  {
    next = value;
  }
  int GetData()
  {
    return data;
  }
  DataNode *GetPrev()
  {
    return prev;
  }
  DataNode *GetNext()
  {
    return next;
  }
};
class Deque
{
private:
  int size;
  DataNode *front;
  DataNode *rear;
public:
  Deque(): size(0), front(NULL), rear(NULL){};
  void PushFront(int data){
    DataNode *newNode=new DataNode(data);
    if(front==NULL)
    {
      front =newNode;
      rear =newNode;
    }
    else{
      front->SetPrev(newNode);
      newNode->SetNext(front);
      front=newNode;
    }
    size++;
  }
  void PushRear(int data){
    DataNode *newNode=new DataNode(data);
    if(front==NULL)
    {
      front =newNode;
      rear =newNode;
    }
    else{
      rear->SetNext(newNode);
      newNode->SetPrev(rear);
      rear=newNode;
    }
    size++;
  }
  int PopFront()
  {
    if (!IsEmpty())
    {
      DataNode *temp = front;
      int value = temp->GetData();
      if(rear==front)
      {
        rear=nullptr;
        front=nullptr;
      }
      else if (temp->GetNext())
      { // front의 next가 존재하면
        front = temp->GetNext(); // front의 next를 front로 지정.
      }
      else
      { // front의 next가 존재하지 않으면 NULL로 돌아감
        front = NULL;
        rear = NULL;
      }
      size--;
      delete temp;// 기존 front의 주소 삭제
      return value;
    }
    return -1;
  }
  int PopRear()
  {
    if (!IsEmpty())
    {
      DataNode *temp = rear;
      int value = temp->GetData();
      if(rear==front)
      {
        rear=nullptr;
        front=nullptr;
      }
      else if (temp->GetPrev())
      { 
        rear = temp->GetPrev();
      }
      else
      { // rear의 prev가 존재하지 않으면 NULL로 돌아감
        front = NULL;
        rear = NULL;
      }
      size--;
      delete temp; //기존 rear의 주소 삭제
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
    if(front==NULL)
    {
      return true;
    }
    return false;
  }
  int GetFrontValue()
  {
    if (front!=NULL)
    {
      return front->GetData();
    }
    return -1;
  }
  int GetRearValue()
  {
    if(rear!=NULL)
    {
      return rear->GetData();
    }
    return -1;
  }


};
int main()
{
  //freopen("input.txt", "r", stdin);
  int tcase = 0;
  cin >> tcase;

  char str[128];
  char *cmd = NULL;
  cin.ignore();

  Deque deque;

  for (int i = 0; i < tcase; i++)
  {
    cin.getline(str, 128, '\n');
    cmd = strtok(str, " ");//문자열 자르기 함수 strtok

    if (strcmp("push_front", cmd) == 0)//문자열 비교함수 strcmp
    {
      char *cmd_var = strtok(NULL, " ");
      int num = atoi(cmd_var);
      deque.PushFront(num);
    }
    else if (strcmp("push_back", cmd) == 0)
    {
      char *cmd_var = strtok(NULL, " ");
      int num = atoi(cmd_var);
      deque.PushRear(num);
    }
    else if (strcmp("pop_front", cmd) == 0)
    {
      cout << deque.PopFront() << endl;
    }
    else if (strcmp("pop_back", cmd) == 0)
    {
      cout << deque.PopRear() << endl;
    }
    else if (strcmp("size", cmd) == 0)
    {
      cout << deque.GetSize() << endl;
    }
    else if (strcmp("empty", cmd) == 0)
    {
      cout << deque.IsEmpty() << endl;
    }
    else if (strcmp("front", cmd) == 0)
    {
      cout << deque.GetFrontValue() << endl;
    }
    else if (strcmp("back", cmd) == 0)
    {
      cout << deque.GetRearValue() << endl;
    }
  }
  return 0;
}