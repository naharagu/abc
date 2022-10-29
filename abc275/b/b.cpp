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

ll mod (ll n)
{
	if (n < 0)
		n += 998244353;
	return n % 998244353;
}

int main()
{
	ll a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	ll ans = mod(mod((mod(mod(a) * mod(b)) * mod(c))) - mod((mod(mod(d) * mod(e)) * mod(f))));

	cout << ans << endl;
}
