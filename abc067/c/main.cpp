#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	ll x = 0;
	ll y = 0;
	ll ans = LONG_MAX;

	for (int i = 0; i < n; i++)
		y += a[i];

	for (int i = 0; i < n - 1; i++)
	{
		x += a[i];
		y -= a[i];
		ans = min(ans, abs(x - y));
	}

	cout << ans << endl;
}