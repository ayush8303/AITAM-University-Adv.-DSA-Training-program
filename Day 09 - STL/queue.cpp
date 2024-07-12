#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{

  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);

  while (q.size() > 0)
  {
    cout << q.front() << endl;
    q.pop();
  }

  return 0;
}