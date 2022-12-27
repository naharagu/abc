#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> dp(n + 1, INT_MAX);

	dp[0] = 1;

	for (int i = 1; i <= n; i++)
	{
		dp[i] = min(dp[i - 1] + k, dp[i - 1] * 2);
	}

	cout << dp[n] << endl;;
}