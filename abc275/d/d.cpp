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

map<ll, ll> m;

ll recursive(ll n)
{
	if (n == 0)
		return 1;
	if (m[n])
		return m[n];
	m[n] = recursive(n / 2) + recursive(n / 3);
	return m[n];
}

int main()
{
	ll n;
	cin >> n;

	ll ans = recursive(n);

	cout << ans << endl;
}
