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
	string s, t;
	cin >> s >> t;

	bool ans = false;

	if (s == t)
		ans = true;

	rep(i, s.size())
	{
		if (s[i] != t[i])
		{
			if (i > 0)
			{
				swap(s[i - 1], s[i]);
				if (s == t)
					ans = true;
				swap(s[i - 1], s[i]);
			}

			if (i + 1 < (int)s.size())
			{
				swap(s[i], s[i + 1]);
				if (s == t)
					ans = true;
				swap(s[i], s[i + 1]);
			}
			break;
		}
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

}
