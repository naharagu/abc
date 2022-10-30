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
	int n, k;
	cin >> n >> k;

	if (k > n)
	{
		cout << 0 << endl;
		return 0;
	}

	vector<ll> h(n);
	rep(i, n)
		cin >> h[i];

	sort(h.begin(), h.end());

	for(int i = n - 1; i >= n - k; i--)
	{
		h[i] = 0;
	}

	ll ans = 0;

	rep(i, n)
		ans += h[i];

	cout << ans << endl;
}
