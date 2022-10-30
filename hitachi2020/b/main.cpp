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
	int A, B, m;
	cin >> A >> B >> m;

	vector<int> a(A + 1);
	vector<int> b(B + 1);

	vector<int> x(m + 1);
	vector<int> y(m + 1);
	vector<int> c(m + 1);

	int min_A = INT_MAX;
	int min_B = INT_MAX;

	rep1(i, A)
	{
		cin >> a[i];
		min_A = min(min_A, a[i]);
	}
	rep1(i, B)
	{
		cin >> b[i];
		min_B = min(min_B, b[i]);
	}

	rep1(i, m)
		cin >> x[i] >> y[i] >> c[i];

	int ans = INT_MAX;

	rep1(i, m)
	{
		ans = min(ans, a[x[i]] + b[y[i]] - c[i]);
	}

	ans = min(ans, min_A + min_B);

	cout << ans << endl;
}
