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
	ll h, w;
	cin >> h >> w;
	// int a[10005][10005];
	// int b[10005][10005];
	vector<vector<int>> a(h, vector<int>(w));
	vector<vector<int>> b(w, vector<int>(h));

	rep(i, h)
	{
		rep(j, w)
			cin >> a[i][j];
	}

	rep(i, w)
	{
		rep(j, h)
			b[i][j] = a[j][i];
	}

	rep(i, w)
	{
		rep(j, h)
		{
			cout << b[i][j];
			if (j == h - 1)
				cout << endl;
			else
				cout << " ";
		}
	}
}
