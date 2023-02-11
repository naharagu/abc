#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

vector<int> isPassed(101010, false);

bool dfs(int current, int before)
{
	isPassed[current] = true;

	for (int i = 0; i < g[current].size(); i++)
	{
		if(g[current][i] == before)
			continue;
		if(isPassed(g[current][i]))
			return true;
		dfs(g[current][i], current);
	}
	return false;
}

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> a(n);
	vector<int> b(n);
	vector<int> g[10009];

	for (int i = 0; i < m; i++)
	{
		cin >> a[i] >> b[i];

		g[a[i]].push_back(b[i]);
		g[b[i]].push_back(a[i]);
	}

	for (int i = 1; i <= n; i++)
	{
		if (g[i].size() >= 3)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	if (dfs(1, -1))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}