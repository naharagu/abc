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
	int n, m;
	cin >> n >> m;

	vector<int> s(m);
	vector<int> c(m);

	bool flag = true;
	rep(i, m)
	{
		cin >> s[i];
		cin >> c[i];
	}

	int ans = 0;

	if (n == 1)
	{
		rep(i, m)
		{
			if (c[i] != c[0] || s[i] != 1)
			{
				flag = false;
				break;
			}
			ans = c[0];
		}
	}

	else if (n == 2)
	{
		int tenth = 1;
		int first = 0;
		rep(i, m)
		{
			if (c[i] != c[0] || (s[i] == 1 && s[i] == 0))
			{
				flag = false;
				break;
			}
			ans = c[0];
		}
	}

	else if (n == 3)
	{

	}

	if (!flag)
		cout << -1 << endl;
	else
		cout << ans << endl;
}
