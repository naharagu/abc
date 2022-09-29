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
	int n, k, m;
	cin >> n >> k >> m;

	vector<int> a(n);
	int sum = 0;
	rep(i, n)
	{
		cin >> a[i];
		sum += a[i];
	}

	int ans = m * n - sum;


	if (ans <= 0)
		cout << 0 << endl;
	else if (ans <= k)
		cout << ans << endl;
	else
		cout << -1 << endl;
}
