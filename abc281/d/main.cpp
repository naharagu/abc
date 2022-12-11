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
	int n, k, d;
	cin >> n >> k >> d;

	vector<int> a(n);
	rep(i, n)
		cin >> a[i];

	vector<vector<int>> dp(n + 1, vector<int>(k, 0));

	dp[0][0] = 0;

	rep(i, n)
	{
		rep(j, k)
		{
			if (!dp[i][j])
				continue;
			
		}
	}

	int ans = 0;

	cout << ans << endl;
}
