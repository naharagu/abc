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
	int n, k, x, y;
	cin >> n >> k >> x >> y;

	int ans = 0;
	if (n < k)
		ans = n * x;
	else
		ans = k * x + (n - k) * y;

	cout << ans << endl;
}
