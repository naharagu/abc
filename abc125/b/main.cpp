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

	int ans = 0;
	vector<int > v(n), c(n);

	rep(i, n)
		cin >> v[i];
	rep(i, n)
		cin >> c[i];

	rep(i, n)
	{
		if (v[i] - c[i] > 0)
			ans += v[i] - c[i];
	}

	cout << ans << endl;
}
