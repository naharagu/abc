#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main()
{
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	vector<int> b(n);
	vector<vector<bool>> dp(n + 1, vector<bool>(x + 1));
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
	}
	vector<int> c(50 * 100 * 50);

	


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x; j++)
			dp[i][j] = false;
	}

	dp[0][0] = true;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= x; j++)
		{
			if (j < a[i])
			{
				if (dp[i - 1][j] == true)
					dp[i][j] = true;
				else
					dp[i][j] = false;
			}
			else
			{

			}
				dp[i][j] = false;

		}
	}

}