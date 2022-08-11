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
	int w, h, x, y;
	cin >> w >> h >> x >> y;

	double ans1 = double(w) * double(h) / 2;

	int ans2 = 0;
	if (x * 2 == w && y * 2 == h)
		ans2 = 1;

	printf("%lf %d\n", ans1, ans2);
}
