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
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	int tmp = 0;
	int ans = 0;

	for (int i = 1; i <= n; i++)
	{
		if (a[i] == i)
		{
			tmp++;
		}
		else
		{
			int j = a[i];
			if (a[j] == i && j > i)
				ans++;
		}
	}
	
	if (tmp)
		ans += (tmp * (tmp - 1)) / 2;

	cout << ans << endl;
}
