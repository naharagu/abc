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
	int n, m;
	cin >> n >> m;

	vector<int> x(m);
	rep(i, m)
		cin >> x[i];
	sort(x.begin(), x.end());

	vector<int> d;
	rep(i, m - 1)
		d.push_back(x[i + 1] - x[i]);
	sort(d.begin(), d.end());

	int ans = 0;
	int count = max(0, m - n);
	rep(i, count)
		ans += d[i];

	cout << ans << endl;
}
