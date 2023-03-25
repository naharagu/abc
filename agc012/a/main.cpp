#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	ll n;
	cin >> n;

	vector<ll> a(n * 3);
	for (int i = 0; i < n * 3; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	ll ans = 0;
	for (int i = n; i < n * 3; i += 2)
	{
		ans += a[i];
	}
	cout << ans << endl;
}