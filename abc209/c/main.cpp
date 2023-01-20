#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	ll mod = 1000000007;

	ll n;
	cin >> n;
	vector<ll> c(n);
	for (int i = 0; i < n; i++)
		cin >> c[i];

	sort(c.begin(), c.end());

	ll ans = 1;
	for (int i = 0; i < n; i++)
	{
		ans *= c[i] - i;
		ans %= mod;
	}

	cout << ans << endl;
}