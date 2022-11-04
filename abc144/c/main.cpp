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
	ll n;
	cin >> n;

	ll ans = LONG_MAX;

	rep1(i, 1010101)
	{
		if (n % i == 0)
			ans = min(ans, i + n / i - 2);
	}

	cout << ans << endl;
}
