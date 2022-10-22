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

	ll ans = 0;
	if (n >= 0 || n % 10 == 0)
		ans = (n / 10) / 1;
	else
		ans = (n / 10) / 1 - 1;

	cout << ans << endl;
}
