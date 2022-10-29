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

	vector<long long> dp(m);
	vector<int> ng(m);

	rep(i, m)
	{
		ng[i] = false;
	}

	rep(i, m)
	{
		int a;
		cin >> a;
		ng[a] = true;
	}

	dp[0] = 1;
	rep(i, n)
	{
		rep1(j, 3)
		{
			if (!ng[i + j])
				dp[i + j] += dp[i];
		}
	}

	cout << dp[n] %  1000000007 << endl;
}
