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
	int n, k;
	cin >> n >> k;

	vector<int> a(k);
	rep(i, k)
		cin >> a[i];

	vector<long long> x(n), y(n);
	rep(i, n)
		cin >> x[i] >> y[i];

	rep(i, n)
	{
		rep(j, n)
		cin >> d[i][j];
	}

	long long ans = 0;

	rep(i, n)
	{
		
	}

	cout << ans << endl;
}
