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

	int smallest_r = INT_MAX;
	int biggest_l = INT_MIN;
	for (int i = 0; i < m; i++)
	{
		int l;
		int r;

		cin >> l >> r;
		smallest_r = min(smallest_r, r);
		biggest_l = max(biggest_l, l);
	}

	// cout << smallest_r << " " << biggest_l << endl;
	int ans = 0;
	if (smallest_r >= biggest_l) {
		ans = smallest_r - biggest_l + 1;
	}
	cout << ans << endl;
}
