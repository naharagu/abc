#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int main()
{
	ll n, m;
	cin >> n >> m;
	vector<pair<ll, ll>> x;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		x.push_back({a, b});
	}
	sort(x.begin(), x.end());

	ll ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (x[i].second < m)
		{
			ans += x[i].first * x[i].second;
			m -= x[i].second;
		}
		else
		{
			ans += x[i].first * m;
			cout << ans << endl;
			return 0;
		}
	}
}
