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
	string s;
	cin >> n >> s;

	int sum = 0;
	vector<int> a(n);
	rep(i, n)
	{
		if (s[i] == 'W')
			a[i] = 0;
		else
			a[i] = 1;
		sum += a[i];
	}

	int ans = INT_MAX;
	int sofar = 0;
	rep(i, n)
	{
		int cnt = 0;
		cnt = (i - sofar) + (sum - sofar);
		sofar += a[i];
		// cout  << i << ' ' << cnt << endl;
		ans = min(ans, cnt);
	}

	cout << ans << endl;
}
