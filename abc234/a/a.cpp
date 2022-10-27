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

ll func(ll n)
{
	return n * n + 2 * n + 3;
}

int main()
{
	int t;
	cin >> t;

	ll ans = func(func(func(t) + t) + func(func(t)));

	cout << ans << endl;
}
