#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

void print_queue(queue<int> q)
{
  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;
}

int main()
{
    int n, q;
    cin >> n >> q;

    queue<int> waiting;
    set<int> called;
    set<int> visited;

    for (int i = 1; i <= n; i++)
        waiting.push(i);

    for (int i = 0; i < q; i++)
    {
        int event;
        cin >> event;

        if (event == 1)
        {
            if (!waiting.empty())
            {
                int id = waiting.front();
                called.insert(id);
                waiting.pop();
            }
        }
        else if (event == 2)
        {
            int x;
            cin >> x;
            if (called.find(x) != called.end())
            {
                visited.insert(x);
                called.erase(x);
            }
        }
        else
        {
            cout << *called.begin() << endl;
            visited.insert(*called.begin());
            called.erase(called.begin());
        }
		// print_queue(waiting);
    }
}