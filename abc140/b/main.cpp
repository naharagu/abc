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

	vector<int> a(n, 0);
	vector<int> b(n, 0);
	vector<int> c(n, 0);

	rep(i, n)
		cin >> a[i];
	rep(i, n)
		cin >> b[i];
	rep(i, n - 1)
		cin >> c[i];

	int ans = 0;
	int prev = -100;

	rep(i, n)
	{
		ans += b[a[i] - 1];
		if (a[i] == prev + 1)
			ans += c[a[i] - 2];
		prev = a[i];
	}

	cout << ans << endl;
}
