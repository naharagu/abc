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

	ll ans = 1;
	rep(i, 31)
		ans *= 2;

	if (-ans <= n && n < ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
