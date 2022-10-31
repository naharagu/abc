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

	vector<int> b(n - 1);
	vector<int> a(n);

	rep(i, n - 1)
		cin >> b[i];

	a[0] = b[0];
	int ans = 0;

	for (int i = 1; i < n; i++)
	{
		a[i] = b[i - 1];
		if (i != n - 1)
		{
			if (a[i] > b[i])
				a[i] = b[i];
		}
	}

	rep(i, n)
	{
		// cout << a[i] << " ";
		ans += a[i];
	}

	cout << ans << endl;
}
