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

	int len = s.size();
	int ans = INT_MAX;

	int count = 0;
	rep(i, len)
	{
		if ((s[i] - '0') == i % 2)
			count++;
	}
	ans = min(ans, count);

	count = 0;
	rep(i, len)
	{
		if ((s[i] - '0') != i % 2)
			count++;
	}
	ans = min(ans, count);

	cout << ans << endl;
}
