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

	ll x = 0;
	ll tmp = n;

	while (tmp)
	{
		x += tmp % 10;
		tmp /= 10;
	}

	if (n % x == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
