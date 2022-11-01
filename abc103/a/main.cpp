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
	vector<int> a(3);
	rep(i, 3)
		cin >> a[i];

	sort(a.begin(), a.end());

	int ans = 0;
	for (int i = 1; i < 3; i++)
	{
		ans += abs(a[i] - a[i - 1]);
	}

	cout << ans << endl;
}
