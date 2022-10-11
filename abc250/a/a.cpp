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
	int h, w, r, c;
	cin >> h >> w >> r >> c;

	int ans = 0;

	if (r - 1 > 0)
		ans++;
	if (r + 1 <= h)
		ans++;
	if (c - 1 > 0)
		ans++;
	if (c + 1 <= w)
		ans++;

	cout << ans << endl;
}
