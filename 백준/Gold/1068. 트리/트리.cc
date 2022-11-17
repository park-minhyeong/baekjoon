#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Tree
{
private:
  int N;
  vector<int> parent;
  vector<vector<int>> children;
  vector<vector<int>> adj;
  vector<bool> visited;

public:
  int root;
  int val = 0;

  Tree() : N(0) {} // n 대입 이면 N(0)
  Tree(int n) : N(n)//n 대입 있으면 다음과 같이 resize.
  {
    parent.resize(n, -1);
    children.resize(n);
    adj.resize(n);
    visited.resize(n, false);
  }

  void FindRoot(int value)
  {
    root = value;
  }

  void ConnectNode(int x, int y)
  {
    adj[x].push_back(y);
    adj[y].push_back(x);
  }

  void MakeTree()
  {
    //BFS
    queue<int> q;
    q.push(root);
    visited[root] = true;
    while (!q.empty())
    {
      int x = q.front();
      q.pop();
      for (auto nx : adj[x])
      {
        if (!visited[nx])
        {
          visited[nx] = true;
          parent[nx] = x;
          children[x].push_back(nx);
          q.push(nx);
        }
      }
    }
  }

  void Leaf(int x)
  {
    if (children[x].empty())
    {
      val++;
    }
    else
    {
      for (auto nx : children[x])
      {
        Leaf(nx);
      }
    }
  }

  void Erase(int x)
  {
    int p = parent[x];
    for (auto nx : children[p])
    {
      if (nx == x)
      {
        children[p].erase(remove(children[p].begin(), children[p].end(), x), children[p].end());
        return;
      }
    }
  }
};

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int N, parent, l;
  cin >> N;

  Tree T(N);
  for (int i = 0; i < N; i++)// i는 노드의 data value.
  {
    cin >> parent;
    if (parent == -1)
      T.FindRoot(i);
    else
      T.ConnectNode(i, parent);
  }
  T.MakeTree();

  cin >> l;
  if (l == T.root)
  {
    cout << 0 << endl;
    return 0;
  }
  T.Erase(l);
  T.Leaf(T.root);

  cout << T.val;
}
