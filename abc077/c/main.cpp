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
	int n;
	cin >> n;
	vector<ll> a(n);
	vector<ll> b(n);
	vector<ll> c(n);
	rep(i, n)
		cin >> a[i];
	rep(i, n)
		cin >> b[i];
	rep(i, n)
		cin >> c[i];


	sort(a.begin(), a.end());
	sort(c.begin(), c.end());

	ll ans = 0;

	rep(i, n)
	{
		ll x = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
		ll y = c.end() - upper_bound(c.begin(), c.end(), b[i]);
		ans += x * y;
	}

	cout << ans << endl;
}
