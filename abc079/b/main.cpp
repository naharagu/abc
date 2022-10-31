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

map<int, ll> mp;

ll helper(int n)
{
	ll res;

	if (mp[n])
		res = mp[n];
	else if (n == 0)
		res = 2;
	else if (n == 1)
		res = 1;
	else
		res = helper(n - 1) + helper(n - 2);

	mp[n] = res;
	return res;
}

int main()
{
	int n;
	cin >> n;

	cout << helper(n) << endl;
}
