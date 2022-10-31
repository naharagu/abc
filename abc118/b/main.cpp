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
	int n, m;
	cin >> n >> m;

	int ans = 0;

	vector<int> k(n+1);
	rep(i, n)
		cin >> k[i];

	vector<int> a(m+1);
	rep(i, n)
	{
		for(int j = 0; j < k[i]; j++)
		{
			int l;
			cin >> l;
			a[l - 1]++;
		}
	}

	rep(i, m)
	{
		if (a[i] == n)
			ans++;
	}

	cout << ans << endl;
}
