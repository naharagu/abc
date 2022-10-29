#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

void recursive_print(int i, int x, int y, int n, int m)
{
	if (x == n)
		return;
	else if (y == n && i == m)
	{
		cout << endl;
		x++;
		y = 0;
	}
	else
	{
		cout << i;
		cout << " ";
		i++;
		y++;
	}
	recursive_print(i ,x, y, n, m);
}

int main()
{
	int n, m;
	cin >> n >> m;

	int size = m*(m-1)*(m-2) / 2;

	vector<vector<int>> table(n, vector<int>(size));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < size; j++)
		{
			table(i, j) = 0;
		}
	}

	recursive_print(1, 1, 1, n, m);
}
