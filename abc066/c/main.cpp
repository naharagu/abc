#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	deque<int> deq;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			deq.push_back(a[i]);
		else
			deq.push_front(a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		int x;
		if (n % 2 == 0)
		{
			x = deq.front();
			deq.pop_front();
		}
		else
		{
			x = deq.back();
			deq.pop_back();
		}
		cout << x;

		if (i != n - 1)
			cout << ' ';
		else
			cout << endl;
	}
}