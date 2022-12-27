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
	vector<int> a(n);
	vector<int> s(n);

	ll sum = 0;
	rep(i, n)
	{
		cin >> a[i];
		sum += a[i];
		s[i] = sum;
	}
	ll x;
	cin >> x;

	int ans = x / sum * n;

	// cout << ans << endl;

	x = x % sum;
	ans += lower_bound(s.begin(), s.end(), x) - s.begin() + 1;

	cout << ans << endl;
}
