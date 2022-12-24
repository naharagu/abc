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

int main()
{
	int n, m;
	cin >> n >> m;

	vector<string> a(n), b(m);
	rep(i, n)
		cin >> a[i];
	rep(i, m)
		cin >> b[i];

	bool ans = false;

	for (int x = 0; x < n; x++)
	{
		for (int y = 0; y < n; y++)
		{
			if (x + m - 1 >= n || y + m - 1 >= n)
				continue;

			bool flag = true;
			rep(i, m)
			{
				rep(j, m)
				{
					if (b[i][j] != a[x + i][y + j])
						flag = false;
				}
			}
			if (flag)
				ans = true;
		}
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
