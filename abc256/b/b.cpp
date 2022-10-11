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

	vector<int> a(n);
	vector<int> b(n);

	rep(i, n)
		cin >> a[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			b[j] += a[i];
		}
	}

	int ans = 0;
	rep(i, n)
	{
		if (b[i] > 3)
			ans++;
	}

	cout << ans << endl;
}
