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
	int x;
	cin >> x;

	bool dp[110000];

	dp[0] = true;

	rep(i, x)
	{
		if (dp[i])
		{
			rep(j, 6)
			{
				dp[i + j + 100] = true;
			}
		}
	}


	if (dp[x])
		cout << 1 << endl;
	else
		cout << 0 << endl;
}
