#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n;
	cin >> n;

	ll ans = 0;

	for (int i = 0; i < n; i++)
	{
		int l, r;
		cin >> l >> r;
		ans += r - l + 1;
	}

	cout << ans << endl;
}