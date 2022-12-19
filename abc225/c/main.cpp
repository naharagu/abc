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

	vector<vector<int>> b(n, vector<int>(m));

	rep(i, n)
	{
		rep(j, m)
		{
			cin >> b[i][j];
		}
	}

	bool ans = true;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int ref = b[0][0] + i * 7 + j;
			if (b[i][j] != ref)
			{
				ans = false;
			}
		}
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
