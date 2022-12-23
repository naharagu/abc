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

	int ans = n;

	rep(i, n + 1)
	{
		int cc = 0;
		int t = i;

		while (t > 0)
		{
			cc += t % 6;
			t /= 6;
		}
		t = n - i;
		while (t > 0)
		{
			cc += t % 9;
			t /= 9;
		}
		if (ans > cc)
			ans = cc;
	}
	cout << ans << endl;
}
