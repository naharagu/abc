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
	ll x, k;
	cin >> x >> k;

	for (int i = 1; i <= k; i++)
	{
		int digit = (x / (ll)pow(10, i - 1)) % 10;

		if (digit >= 5)
			x = x / pow(10, i) + 1;
		else
			x = x / pow(10, i);

		x = x * pow(10, i);

		if (x < pow(10, i))
			break;
	}

	cout << x << endl;
}
