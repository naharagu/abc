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

	map<ll, vector<ll>> m;

	rep(i, n)
	{
		ll a;
		cin >> a;

		m[a].push_back(i + 1);
	}

	rep(i, q)
	{
		ll x, k;
		cin >> x >> k;

		if (m[x].size() < k)
			cout << -1 << endl;
		else
			cout << m[x][k - 1] << endl;
	}
}
