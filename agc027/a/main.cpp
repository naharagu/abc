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
	int n, x;
	cin >> n >> x;


	vector<int> a(n);
	rep(i, n)
		cin >> a[i];

	sort(a.begin(), a.end());

	int ans = 0;

	for (int i = 0; i < n - 1; i++)
	{
		if (x >= a[i])
		{
			x -= a[i];
			ans++;
		}
	}

	if (x == a[n - 1])
		ans++;

	cout << ans << endl;
}
