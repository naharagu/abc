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
	int n, q;
	cin >> n >> q;

	vector<vector<int>> a(n);

	rep(i, n)
	{
		int l;
		cin >> l;
		a[i].resize(l);
		rep(k, l)
			cin >> a[i][k];
	}

	rep(i, q)
	{
		int s, t;
		cin >> s >> t;

		cout << a[s - 1][t - 1] << endl;
	}
}
