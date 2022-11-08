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
	int m;

	cin >> n;
	vector<string> s(n);
	rep(i, n)
		cin >> s[i];
	cin >> m;
	vector<string> t(m);
	rep(i, m)
		cin >> t[i];

	int ans = 0;

	rep(i, n)
	{
		int point = 0;
		rep(j, n)
		{
			if (s[i] == s[j])
				point++;
		}
		rep(j, m)
		{
			if (s[i] == t[j])
				point--;
		}
		ans = max(ans, point);
	}
	cout << ans << endl;
}
