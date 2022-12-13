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

	vector<int> a(n + 1);
	vector<bool> b(n + 1, false);
	b[x] = true;

	rep1(i, n)
		cin >> a[i];

	int i = x;
	int ans = 1;
	while (1)
	{
		if (b[a[i]] == false)
		{
			b[a[i]] = true;
			ans++;
			i = a[i];
		}
		else
			break;
	}

	cout << ans << endl;
}
