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
	int x[3], y[3];
	rep(i, 3)
		cin >> x[i] >> y[i];

	int ans1 = 0, ans2 = 0;

	if (x[0] != x[1] && x[0] != x[2])
		ans1 = x[0];
	if (x[1] != x[0] && x[1] != x[2])
		ans1 = x[1];
	if (x[2] != x[0] && x[2] != x[1])
		ans1 = x[2];
	if (y[0] != y[1] && y[0] != y[2])
		ans2 = y[0];
	if (y[1] != y[0] && y[1] != y[2])
		ans2 = y[1];
	if (y[2] != y[0] && y[2] != y[1])
		ans2 = y[2];

	cout << ans1 << " " << ans2 << endl;
}
