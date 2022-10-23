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
	int n;
	cin >> n;

	vector<bool> cut(360, false);
	cut[0] = true;

	int now = 0;

	rep(i, n)
	{
		int a;
		cin >> a;

		now += a;
		now %= 360;

		cut[now] = true;
	}

	int ans = 0;
	int count = 0;

	rep(i, 361)
	{
		if (cut[i % 360])
		{
			ans = max(ans, count);
			count = 0;
		}
		count++;
	}

	cout << ans << endl;
}
