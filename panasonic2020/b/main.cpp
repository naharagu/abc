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
	ll h, w;
	cin >> h >> w;

	if (h == 1 or w == 1)
	{
		cout << 1 << endl;
		return 0;
	}

	ll ans = 0;

	ans = h * w / 2;
	if (h * w % 2 == 1)
		ans++;

	cout << ans << endl;
}
