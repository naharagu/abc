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

map<ll, ll> m;

ll helper(ll h)
{
	if (h < 1)
		return 0;
	if (m.count(h)){
		return m[h];
	}
	else {
		m[h] = 2 * helper(h / 2) + 1;
		return m[h];
	}
}

int main()
{
	ll h;
	cin >> h;
	m[1] = 1;
	cout << helper(h) << endl;
}
