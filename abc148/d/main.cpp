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
	rep(i, n)
		cin >> a[i];

	int ans = 1;

	rep(i, n)
	{
		if (a[i] == ans)
			ans++;
	}

	if (ans == 1)
		cout << -1 << endl;
	else
		cout << n - ans + 1 << endl;
}
