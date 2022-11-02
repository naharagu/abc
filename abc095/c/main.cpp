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
	int a, b, c, x, y;
	cin >> a  >> b >> c >> x >> y;

	int ans = 0;
	if (a + b < 2 * c)
		ans = a * x + b * y;
	else
	{
		ans += 2 * c * min(x, y);

		if (x > y)
			ans += (x - y) * min(a, c * 2);
		else
			ans += (y - x) * min(b, c * 2);
	}
	cout << ans << endl;
}
