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

	vector<int> x(n);
	rep(i, n)
		cin >> x[i];

	int ans = INT_MAX;
	for (int i = 0; i + k <= n; i++)
	{
		int l = x[i];
		int r = x[i + k - 1];
		ans = min(ans, r - l + min(abs(l), abs(r)));
	}

	cout << ans << endl;
}
