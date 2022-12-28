#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	ll ans;
	ll first;
	cin >> first;
	ans = first;

	for (int i = 1; i < n; i++)
	{
		ll t;
		cin >> t;
		ans = lcm(ans, t);
	}

	cout << ans << endl;
}