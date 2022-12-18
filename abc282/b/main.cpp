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

	int ans = 0;

	vector<string> s(n);
	rep(i, n)
		cin >> s[i];

	rep(i, n)
	{
		for (int j = i + 1; j < n; j++)
		{
			bool flag = true;
			rep(k, m)
			{
				if (s[i][k] == 'x' && s[j][k] == 'x')
					flag = false;
			}
			if (flag)
				ans++;
		}
	}
	cout << ans << endl;
}
