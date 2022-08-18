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
	int n, d;
	cin >> n >> d;

	vector<vector<int>> x(n, vector<int>(d));
	rep(i, n) rep(j, d) cin >> x[i][j];

	int ans = 0;

	rep(i, n) for(int j = i + 1; j < n; j++)
	{
		int dd = 0;
		rep(k, d)
			dd += abs(x[i][k] - x[j][k]) * abs(x[i][k] - x[j][k]);
		rep(c, dd + 1)
		{
			if (c * c  == dd)
			{
				ans++;
				break;
			}
		}
	}

	cout << ans << endl;
}
