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
	int h, w;
	cin >> h >> w;

	vector<string> s(h), t(h);
	rep(i, h)
		cin >> s[i];
	rep(i, h)
		cin >> t[i];

	vector<string> x(w), y(w);
	rep(i, h)
	{
		rep(j, w)
		{
			x[j].push_back(s[i][j]);
			y[j].push_back(t[i][j]);
		}
	}

	sort(x.begin(), x.end());
	sort(y.begin(), y.end());

	if (x == y)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
