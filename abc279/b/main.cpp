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

	if (s.size() < t.size())
	{
		cout << "No" << endl;
		return 0;
	}

	rep(i, s.size())
	{
		rep(j, t.size())
		{
			if (t[j] != s[i + j])
				break;
			if (j == (int)t.size() - 1)
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;
}
