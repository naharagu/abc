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
	ll x;
	cin >> x;

	ll ans = 0;

	ans += x / 500 * 1000;
	x -= x / 500 * 500;

	ans += x / 5 * 5;

	cout << ans << endl;
}
