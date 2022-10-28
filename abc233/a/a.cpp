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
	int x, y;
	cin >> x >> y;

	int ans = 0;

	if (x >= y)
		cout << ans << endl;
	else
	{
		if ((y - x) % 10 != 0)
			ans = (y - x) / 10 + 1;
		else
			ans = (y - x) / 10;
		cout << ans << endl;
	}
}
