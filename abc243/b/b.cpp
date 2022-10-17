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
	rep(i, n)
		cin >> b[i];

	int ans1 = 0;
	int ans2 = 0;

	rep(i, n)
	{
		if (a[i] == b[i])
			ans1++;
	}
	rep(i, n)
	{
		rep(j, n)
		{
			if (a[i] == b[j])
				ans2++;
		}
	}

	cout << ans1 << endl;
	cout << ans2 - ans1 << endl;

}
