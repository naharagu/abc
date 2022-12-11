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
	int n, m, k;
	cin >> n >> m >> k;

	vector<int> a(n);
	rep(i, n)
		cin >> a[i];

	for (int i = 0; i < n - m + 1; i++)
	{
		vector<int> b(m);
		for (int j = 0; j < m; j++)
		{
			b[j] = a[i + j];
		}
		sort(b.begin(), b.end());
		int ans = 0;
		for (int j = 0; j < k; j++)
		{
			ans += b[j];
		}
		cout << ans;

		if (i != n - m)
			cout << ' ';
		else
			cout << endl;
	}
}
