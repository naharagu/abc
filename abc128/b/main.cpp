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
	int n;
	cin >> n;

	vector<string> s(n);
	vector<int > p(n);
	rep(i, n)
		cin >> s[i] >> p[i];

	vector<int> ans(n);
	rep(i, n)
		ans[i] = i;

	sort(ans.begin(), ans.end(), [&](int a, int b)
	{
		if (s[a] != s[b])
			return s[a] < s[b];
		return p[a] > p[b];
	});

	rep(i, n)
		cout << ans[i] + 1 << endl;
}
