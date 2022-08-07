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
	string s;
	cin >> s;

	int n = s.size();

	ll ans = 0;

	for (int bit = 0; bit < (1 << (n-1)); bit++)
	{
		ll tmp = 0;
		for (int i = 0; i < n-1; i++)
		{
			tmp *= 10;
			tmp += s[i] - '0';

			if (bit & (1 << i))
			{
				ans += tmp;
				tmp = 0;
			}
		}

		tmp *= 10;
		tmp += s.back() - '0';
		ans += tmp;
	}
	cout << ans << endl;
}
