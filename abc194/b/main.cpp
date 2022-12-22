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

	int ans = INT_MAX;

	vector<int> a(n);
	vector<int> b(n);

	rep(i, n)
		cin >> a[i] >> b[i];

	rep(i, n)
	{
		rep(j, n)
		{
			if (i == j)
				ans = min(ans, a[i] + b[j]);
			else
				ans = min(ans, max(a[i], b[j]));
		}
	}


	cout << ans << endl;
}
