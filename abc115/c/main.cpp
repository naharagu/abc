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

	vector<int> h(n);
	rep(i, n)
		cin >> h[i];

	sort(h.begin(), h.end());

	int ans = INT_MAX;

	rep(i, n - k + 1)
	{
		int diff = h[i + k - 1] - h[i];
		ans = min(ans, diff);
	}

	cout << ans << endl;
}
