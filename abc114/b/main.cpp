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

	int ans = INT_MAX;

	for (int i = 0; i <= (int)s.size() - 3; i++)
	{
		int a = 100 * (s[i] - '0') + 10 * (s[i + 1] - '0') + s[i + 2] - '0';

		ans = min(ans, abs(753 - a));
	}

	cout << ans << endl;
}
