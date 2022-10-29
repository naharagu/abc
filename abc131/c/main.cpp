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

ll a, b, c, d;

ll countMultiple(ll r, ll div, ll mod)
{
	ll res = r / div;
	
	if (!r)
		return 0;
	if (mod <= r % div and 0 < mod)
		res++;
	return res;
}

ll hepler(ll n)
{
	if (!n)
		return 0;

	ll lcd = lcm(c, d);

	return n - (countMultiple(n, c, 0) + countMultiple(n, d, 0) - countMultiple(n, lcd, 0));
}

int main()
{
	cin >> a >> b >> c >> d;

	cout << hepler(b) - hepler(a - 1) << endl;
}
