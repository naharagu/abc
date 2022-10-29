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
	int h, w;
	cin >> h >> w;

	int a[h][w];

	rep(i, h)
		rep(j, w)
			a[i][j] = 0;

	int x, y;
	cin >> x >> y;

	int ans = 0;

	rep(i, x)
	{
		rep(j, w)
			a[i][j] = 1;
	}

	rep(i, h)
	{
		rep(j, y)
			a[i][j] = 1;
	}

	rep(i, h)
	{
		rep(j, w)
		{
			if (a[i][j] == 0)
				ans++;
		}
	}

	cout << ans << endl;
}
